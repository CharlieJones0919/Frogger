#include "Frog.h"

Frog::Frog()
{
	sprite.setScale(1.5f, 1.5f);
	lives = 3;
}

Frog::~Frog() 
{
}

void Frog::setFrogProperties() // Starting state of the frog.
{
	isDying = false;

	// Load in frog texture.
	skinLoadSuccess = skin.loadFromFile("Assets/Frog Sprites/Frog Spritesheet.png");
	if (skinLoadSuccess)
	{
		sprite.setTexture(skin);
	}
	else
	{
		cout << "Frog Texture Not Loaded" << endl;
		system("pause");
	}

	numOfFrames = 3;
	oneFrameRect[0] = sf::IntRect(0, 1, 12, 14);
	oneFrameRect[1] = sf::IntRect(12, 0, 10, 14);
	oneFrameRect[2] = sf::IntRect(22, 0, 12, 14);

	currentFrame = 0;
	sprite.setTextureRect(oneFrameRect[currentFrame]);
	sprite.setOrigin(sprite.getTextureRect().width / 2.0f, sprite.getTextureRect().height / 2.0f);

	playerStartPosition = Vector2f((windowDimensions.x / 2.0f), (((windowDimensions.y / 15) * 15) + sprite.getTextureRect().height));
	sprite.setPosition(playerStartPosition);
	leapDist = (windowDimensions.y / 15);
}

void Frog::movement(sf::String direction) 
{
	changeSprites(); // Changes frame every movement input.

	if (direction == "Up")
	{
		if ((sprite.getPosition().y - leapDist) > ((windowDimensions.x / 15) * 2))
		{
			sprite.move(0.0f, -leapDist);
		}
		sprite.setRotation(0);
	}
	else if (direction == "Right")
	{
		if ((sprite.getPosition().x + leapDist) < windowDimensions.x)
		{
			sprite.move(leapDist, 0.0f);
		}
		sprite.setRotation(90);
	}
	else if (direction == "Down")
	{
		if ((sprite.getPosition().y + leapDist) < ((windowDimensions.x / 15) * 16))
		{
			sprite.move(0.0f, leapDist);
		}
		sprite.setRotation(180);
	}
	else if (direction == "Left")
	{
		if ((sprite.getPosition().x - leapDist) > 0)
		{
			sprite.move(-leapDist, 0.0f);
		}
		sprite.setRotation(270);
	}
}

void Frog::changeSprites() // Change to next frame.
{
	if (currentFrame < numOfFrames)
	{ 
		sprite.setTextureRect(oneFrameRect[currentFrame]);
		currentFrame++;
	}
	
	if (currentFrame == numOfFrames)
	{
		currentFrame = 0;

		if (isDying == true)
		{
			isDying = false;
			setFrogProperties();
		}
	}

	sprite.setOrigin(sprite.getTextureRect().width / 2.0f, sprite.getTextureRect().height / 2.0f);
}

void Frog::hasBeenHurt(int damage)
{
	isDying = true;
	lives = lives - damage;
	sprite.setRotation(0);
	setDeathAnimationFrames(); // Changes sprite to death sprite and frames.
}

void Frog::isOnPlatform(float platSpeed, sf::String platDirection) // Move in direction and speed of platform if on one. 
{
	if (platDirection == "Left")
	{
		sprite.move(-platSpeed, 0.0f);
	}
	else
	{
		sprite.move(platSpeed, 0.0f);
	}

	if ((sprite.getPosition().x < 0) || (sprite.getPosition().x > windowDimensions.x)) // Die if carried out of the window's bounds.
	{
		hasBeenHurt(1);
	}
}

void Frog::setDeathAnimationFrames()
{
	skinLoadSuccess = skin.loadFromFile("Assets/Winning or Losing Sprites/Death Spritesheet.png");
	if (skinLoadSuccess)
	{
		sprite.setTexture(skin);
	}
	else
	{
		cout << "Dead Frog Texture Not Loaded" << endl;
		system("pause");
	}

	numOfFrames = 4;
	oneFrameRect[0] = sf::IntRect(0, 0, 16, 16);
	oneFrameRect[1] = sf::IntRect(16, 0, 14, 16);
	oneFrameRect[2] = sf::IntRect(30, 0, 12, 16);
	oneFrameRect[2] = sf::IntRect(42, 0, 15, 16);

	currentFrame = 0;
	sprite.setTextureRect(oneFrameRect[currentFrame]);
	sprite.setOrigin(sprite.getTextureRect().width / 2.0f, sprite.getTextureRect().height / 2.0f);
}

bool Frog::getIsDying()
{
	return isDying;
}

int Frog::getRemainingLives()
{
	return lives;
}

void Frog::setLives(int setLivesTo)
{
	lives = setLivesTo;
}