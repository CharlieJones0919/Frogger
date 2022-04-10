#include "SpriteObject.h"

SpriteObject::SpriteObject()
{
}

SpriteObject::~SpriteObject() 
{
}

void SpriteObject::getWindowSize(sf::Vector2i retrievedWindowDimensions)
{
	windowDimensions = retrievedWindowDimensions;
}

sf::FloatRect SpriteObject::getBoundingBox() 
{
	return sprite.getGlobalBounds();
}

sf::Sprite SpriteObject::getSprite()
{
	return sprite;
}