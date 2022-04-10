#include "AnimatedObject.h"

AnimatedObject::AnimatedObject()
{
	frameCounter = 0;
}

AnimatedObject::~AnimatedObject()
{
}
	
void AnimatedObject::animateSprites()
{
	elapsedAnimationTime = animationTimer.getElapsedTime();

	if (elapsedAnimationTime.asSeconds() > 0.5f)
	{
		if (frameCounter < numOfFrames)
		{
			sprite.setTextureRect(animationFrameRects[frameCounter]);
			frameCounter++;
		}
		else 
		{
			frameCounter = 0;
		}

		animationTimer.restart();
	}
}