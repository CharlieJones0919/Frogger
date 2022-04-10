#include "GroundTile.h"

GroundTile::GroundTile()
{
	winningBoxHasBeenTriggered = false;

	objectName[0] = "Won Grass";
	textureDir[0] = "Assets/Ground Sprites/Won Grass.png";
	objectNumOfFrames[0] = 2;
	objectAnimationFrameRects[0][0] = sf::IntRect(0, 0, 32, 16);
	objectAnimationFrameRects[0][1] = sf::IntRect(32, 0, 32, 16);
	isMovingPlatform[0] = false;

	objectName[1] = "Safe Grass";
	textureDir[1] = "Assets/Ground Sprites/Safe Grass.png";
	objectNumOfFrames[1] = 0;
	objectAnimationFrameRects[1][0] = sf::IntRect(0, 0, 32, 16);
	isMovingPlatform[1] = false;

	objectName[2] = "Water";
	textureDir[2] = "Assets/Ground Sprites/Water.png";
	objectNumOfFrames[2] = 0;
	objectAnimationFrameRects[2][0] = sf::IntRect(0, 0, 32, 16);
	isMovingPlatform[2] = false;
}

GroundTile::~GroundTile()
{
}

void GroundTile::setTilePosition(int acrossNum, int downNum) // Set tiles's position to corresponding column and row.
{
	sprite.setTextureRect(objectAnimationFrameRects[objectIDNum][0]);
	sprite.setScale(3.5f, 3.5f);
	sprite.setOrigin(sprite.getTextureRect().width / 2.0f, sprite.getTextureRect().height / 2.0f);

	sprite.setPosition((windowDimensions.x / 15) * (acrossNum * 1.525f) + (sprite.getTextureRect().width), (((windowDimensions.y / 15) * downNum) + sprite.getTextureRect().height));
}

sf::String GroundTile::getGroundType() // Retrieve this object's name/type.
{
	return objectName[objectIDNum];
}

void GroundTile::setWinningBox() // Changes sprite frame to triggered winning tile. (One with the frog). 
{
	sprite.setTextureRect(objectAnimationFrameRects[0][1]);
	winningBoxHasBeenTriggered = true;
}

void GroundTile::unsetWinningBox() // Sets frame back to default.
{
	sprite.setTextureRect(objectAnimationFrameRects[0][0]);
	winningBoxHasBeenTriggered = true;
}

bool GroundTile::getWinningBoxHasBeenTriggered()
{
	return winningBoxHasBeenTriggered;
}

