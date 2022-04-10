#pragma once
#ifndef FROG_H
#define FROG_H

#include "SpriteObject.h"

class Frog : public SpriteObject
{
private:
	unsigned int numOfFrames;
	unsigned int currentFrame;
	sf::IntRect oneFrameRect[5];
	sf::Vector2f playerStartPosition;

	float leapDist;
	int lives;

	bool isDying;

public:
	Frog();
	~Frog();

	void setFrogProperties();

	void movement(sf::String direction);
	void changeSprites();
	void hasBeenHurt(int damage);

	void isOnPlatform(float platSpeed, sf::String platDirection);
	void setDeathAnimationFrames();
	bool getIsDying();
    int getRemainingLives();
	void setLives(int setLivesTo);

};

#endif