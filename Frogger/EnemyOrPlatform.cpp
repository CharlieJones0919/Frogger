#include "EnemyOrPlatform.h"

EnemyOrPlatform::EnemyOrPlatform()
{
	// All the Enemy or Platform object types and properties. Will be counted through in a loop and if the player has set the EnemyOrPlatform object to have one of these following names, the object will have the corresponding other integer identified properties from each array.

	objectName[0] = "Car";
	objectDistBetweenObjects[0] = 9; // Amount of space between objects in the same row.
	textureDir[0] = "Assets/Enemy Sprites/Vehicles/Car.png"; // Texture directory.
	objectNumOfFrames[0] = 0;
	objectAnimationFrameRects[0][0] = sf::IntRect(0, 0, 15, 10);
	objectSpeed[0] = 0.075f;
	isMovingPlatform[0] = false;

	objectName[1] = "Lorry";
	objectDistBetweenObjects[1] = 4.5f;
	textureDir[1] = "Assets/Enemy Sprites/Vehicles/Lorry.png";
	objectNumOfFrames[1] = 0;
	objectAnimationFrameRects[1][0] = sf::IntRect(0, 0, 27, 10);
	objectSpeed[1] = 0.06f;
	isMovingPlatform[1] = false;

	objectName[2] = "Race Kart";
	objectDistBetweenObjects[2] = 4.5;
	textureDir[2] = "Assets/Enemy Sprites/Vehicles/Race Kart.png";
	objectNumOfFrames[2] = 0;
	objectAnimationFrameRects[2][0] = sf::IntRect(0, 0, 16, 14);
	objectSpeed[2] = 0.1f;
	isMovingPlatform[2] = false;

	objectName[3] = "Race Kart 2.0";
	objectDistBetweenObjects[3] = 5;
	textureDir[3] = "Assets/Enemy Sprites/Vehicles/Race Kart 2.0.png";
	objectNumOfFrames[3] = 0;
	objectAnimationFrameRects[3][0] = sf::IntRect(0, 0, 16, 14);
	objectSpeed[3] = 0.1f;
	isMovingPlatform[3] = false;

	objectName[4] = "Race Kart 3.0";
	objectDistBetweenObjects[4] = 2;
	textureDir[4] = "Assets/Enemy Sprites/Vehicles/Race Kart 3.0.png";
	objectNumOfFrames[4] = 0;
	objectAnimationFrameRects[4][0] = sf::IntRect(0, 0, 14, 12);
	objectSpeed[4] = 0.1f;
	isMovingPlatform[4] = false;

	objectName[5] = "Snake";
	objectDistBetweenObjects[5] = 5;
	textureDir[5] = "Assets/Enemy Sprites/Snake/Snake Spritesheet.png";
	objectNumOfFrames[5] = 8;
	objectAnimationFrameRects[5][0] = sf::IntRect(0, 0, 29, 11);
	objectAnimationFrameRects[5][1] = sf::IntRect(29, 0, 28, 11);
	objectAnimationFrameRects[5][2] = sf::IntRect(57, 0, 27, 11);
	objectAnimationFrameRects[5][3] = sf::IntRect(84, 0, 30, 11);
	objectAnimationFrameRects[5][4] = sf::IntRect(114, 0, 30, 11);
	objectAnimationFrameRects[5][5] = sf::IntRect(144, 0, 30, 11);
	objectAnimationFrameRects[5][6] = sf::IntRect(174, 0, 27, 11);
	objectAnimationFrameRects[5][7] = sf::IntRect(201, 0, 28, 11);
	objectSpeed[5] = 0.05f;
	isMovingPlatform[5] = false;

	objectName[6] = "inCrocodile";
	objectDistBetweenObjects[6] = 3;
	textureDir[6] = "Assets/Enemy Sprites/Crocodile/Crocodile Spritesheet.png";
	objectNumOfFrames[6] = 2;
	objectAnimationFrameRects[6][0] = sf::IntRect(0, 0, 47, 30);
	objectAnimationFrameRects[6][1] = sf::IntRect(47, 0, 47, 30);
	objectSpeed[6] = 0.075f;
	isMovingPlatform[6] = false;

	objectName[7] = "pTurtle";
	objectDistBetweenObjects[7] = 4;
	textureDir[7] = "Assets/Platform Sprites/Turtle/Turtle Spritesheet.png";
	objectNumOfFrames[7] = 10;
	objectAnimationFrameRects[7][0] = sf::IntRect(0, 0, 0, 12);
	objectAnimationFrameRects[7][1] = sf::IntRect(0, 0, 44, 12);
	objectAnimationFrameRects[7][2] = sf::IntRect(44, 0, 37, 12);
	objectAnimationFrameRects[7][3] = sf::IntRect(81, 0, 45, 12);
	objectAnimationFrameRects[7][4] = sf::IntRect(126, 0, 45, 12);
	objectAnimationFrameRects[7][5] = sf::IntRect(171, 0, 45, 12);
	objectAnimationFrameRects[7][6] = sf::IntRect(216, 0, 45, 12);
	objectAnimationFrameRects[7][7] = sf::IntRect(261, 0, 42, 12);
	objectAnimationFrameRects[7][8] = sf::IntRect(303, 0, 37, 12);
	objectAnimationFrameRects[7][9] = sf::IntRect(340, 0, 44, 12);
	objectSpeed[7] = 0.02f;
	isMovingPlatform[7] = true;

	objectName[8] = "pLog";
	objectDistBetweenObjects[8] = 3;
	textureDir[8] = "Assets/Platform Sprites/Log.png";
	objectNumOfFrames[8] = 0;
	objectAnimationFrameRects[8][0] = sf::IntRect(0, 0, 42, 12);
	objectSpeed[8] = 0.075f;
	isMovingPlatform[8] = true;
}

EnemyOrPlatform::~EnemyOrPlatform()
{
}