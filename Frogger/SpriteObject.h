#pragma once
#ifndef SPRITEOBJECT_H
#define SPRITEOBJECT_H

#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

class SpriteObject
{
protected:
	sf::Vector2i windowDimensions;

	sf::Texture skin;
	bool skinLoadSuccess;
	sf::Sprite sprite;

public:
	SpriteObject();
	~SpriteObject();

	void getWindowSize(sf::Vector2i retrievedWindowDimensions);
	sf::FloatRect getBoundingBox();
	sf::Sprite getSprite();

};

#endif