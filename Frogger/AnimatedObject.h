#pragma once
#ifndef ANIMATEDOBJECT_H
#define ANIMATEDOBJECT_H

#include "NonPlayerObject.h"

class AnimatedObject : public NonPlayerObject
{
protected:
	sf::Clock animationTimer;
	sf::Time elapsedAnimationTime;
	unsigned int frameCounter;

public:
	AnimatedObject();
	~AnimatedObject();

	void animateSprites();

};

#endif