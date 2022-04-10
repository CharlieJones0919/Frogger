#include "TextObject.h"

TextObject::TextObject()
{
	if (!textFont.loadFromFile("Assets/Fonts/Sebastien-Slab-Round.ttf")) // Set text's default font.
	{
		cout << "Font Failed to Load" << endl;
	}
	else
	{
		text.setFont(textFont);
		text.setCharacterSize(35);

		textColour = sf::Color(245, 220, 40);
		text.setFillColor(textColour);
	}
}

TextObject::~TextObject()
{
}

void TextObject::setTextPosition(sf::Vector2f inputTextPosition)
{
	text.setPosition(inputTextPosition);
}

sf::Text TextObject::setAndGetText(sf::String inputString)
{
	text.setString(inputString);
	return text;
}

void TextObject::changeTextFont(sf::String inputFont)
{
	if (!textFont.loadFromFile(inputFont))
	{
		cout << "Font Failed to Load" << endl;
	}
	else
	{
		text.setFont(textFont);
	}
}

void TextObject::changeTextColour(sf::Color inputColour)
{
	text.setFillColor(inputColour);
}

void TextObject::revertTextColour()
{
	text.setFillColor(textColour);
}