#pragma once
#ifndef MOVINGOBJECT_H
#define MOVINGOBJECT_H

#include "AnimatedObject.h"

class MovingObject : public AnimatedObject
{
protected:
	float objectSpeed[numOfObjects];
	sf::String facingDirection;
	float distanceBetween;
	float movementSpeed = 0.0f;
	float onSameRowOffset;

public:
	MovingObject();
	~MovingObject();
	
	void setMovingObjectProperties(sf::Vector2f inputStartingPosition, sf::String inputFacingDir);
	void movement();

	bool getMovingPlatformStatus();
	float getPlatformSpeed();
	sf::String getPlatformDirection();

	void setMovementSpeedToDifficulty(int currrentDifficulty);

};

#endif