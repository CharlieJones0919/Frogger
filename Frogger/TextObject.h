#pragma once
#ifndef TEXTOBJECT_H
#define TEXTOBJECT_H

#include "SpriteObject.h"

class TextObject : public SpriteObject
{
private:
	sf::Text text;
	sf::Font textFont;
	sf::Color textColour;

public:
	TextObject();
	~TextObject();

	void setTextPosition(sf::Vector2f inputTextPosition);
	sf::Text setAndGetText(sf::String inputString);
	void changeTextFont(sf::String inputFont);
	void changeTextColour(sf::Color inputColour);
	void revertTextColour();
};

#endif