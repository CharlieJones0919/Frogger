#pragma once
#ifndef NONPLAYEROBJECT_H
#define NONPLAYEROBJECT_H

#include "SpriteObject.h"

class NonPlayerObject : public SpriteObject
{
protected:
	static int const numOfObjects = 9;
	unsigned int setPropCount;

	int objectNumOfFrames[numOfObjects];
	sf::IntRect objectAnimationFrameRects[numOfObjects][10];

	sf::String objectName[numOfObjects];
	unsigned int numOfFrames;
	sf::IntRect animationFrameRects[10];
	float objectDistBetweenObjects[numOfObjects];
	sf::String textureDir[numOfObjects];
	bool isMovingPlatform[numOfObjects];

	unsigned int objectIDNum;
	char firstCharOfObjectName;

public:
	NonPlayerObject();
	~NonPlayerObject();

	void setNonPlayerProperties(sf::String inputObjectName);

};

#endif