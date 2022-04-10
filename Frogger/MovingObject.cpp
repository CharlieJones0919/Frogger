#include "MovingObject.h"

MovingObject::MovingObject()
{
}

MovingObject::~MovingObject() 
{
}

void MovingObject::setMovingObjectProperties(sf::Vector2f inputStartingPosition, sf::String inputFacingDirection) // Sets this individual object's type and direction as specified from main and correspond's the object's other properties to that object number's other array values.
{
	movementSpeed = objectSpeed[objectIDNum];
	facingDirection = inputFacingDirection;

	sprite.setTextureRect(animationFrameRects[0]); // Sets to first frame of object's frame array.
	sprite.setOrigin(sprite.getTextureRect().width / 2.0f, sprite.getTextureRect().height / 2.0f); // Set origin of object to centre.

	if (inputFacingDirection == "Right")
	{
		sprite.setScale(-sprite.getScale().x, sprite.getScale().y); // If object is facing right flip the sprite's scale horizontally so it's facing the right way.
	}

	distanceBetween = windowDimensions.x / objectDistBetweenObjects[objectIDNum];

	if (firstCharOfObjectName == 'i') // Adds offset to the crocodile or any other future objects on the same line as another.
	{
		if (inputFacingDirection == "Left")
		{
			onSameRowOffset = 100.0f;
		}
		else if (inputFacingDirection == "Right")
		{
			onSameRowOffset = -150.0f;
		}
	}
	else
	{
		onSameRowOffset = 0.0f;
	}

	sprite.setPosition((inputStartingPosition.x * distanceBetween) + onSameRowOffset, ((windowDimensions.x / 15) * inputStartingPosition.y) + (sprite.getTextureRect().height));
}

void MovingObject::movement() // Move object in specified input direction until it passes the window bounds, when it'll be teleported to the other side of the window to start again.
{
	if (((facingDirection == "Left") && (sprite.getPosition().x > ((0.0f - distanceBetween) + onSameRowOffset))) || ((facingDirection == "Right") && (sprite.getPosition().x < ((windowDimensions.x + distanceBetween) + onSameRowOffset)))) 
	{
		if (facingDirection == "Left")
		{
			sprite.move(-movementSpeed, 0.0f);
		}
		else if (facingDirection == "Right")
		{
			sprite.move(movementSpeed, 0.0f);
		}
	}
	else if (facingDirection == "Left")
	{
		sprite.setPosition(((windowDimensions.x + distanceBetween) + onSameRowOffset), sprite.getPosition().y);
	}
	else if (facingDirection == "Right")
	{
		sprite.setPosition(((0.0f - distanceBetween) - onSameRowOffset), sprite.getPosition().y);
	}

	if (numOfFrames > 0)
	{
		animateSprites();
	}
}

bool MovingObject::getMovingPlatformStatus() // For checking if it's a platform or enemy.
{
	return isMovingPlatform[objectIDNum];
}

float MovingObject::getPlatformSpeed() // So player can move with the platforms.
{
	return movementSpeed;
}

sf::String MovingObject::getPlatformDirection()
{
	return facingDirection;
}

void MovingObject::setMovementSpeedToDifficulty(int currrentDifficulty) // To increase the speed of the enemies and platforms when the level increases.
{
	movementSpeed += (movementSpeed * (currrentDifficulty / 25.0f));
}
