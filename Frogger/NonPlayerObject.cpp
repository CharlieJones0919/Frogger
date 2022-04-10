#include "NonPlayerObject.h"

NonPlayerObject::NonPlayerObject()
{
}

NonPlayerObject::~NonPlayerObject()
{
}

void NonPlayerObject::setNonPlayerProperties(sf::String inputObjectName) // Sets object type to string name input and correlates other object properties to that type's number in all the property arrays.
{
	for (int objectTypeCounter = 0; objectTypeCounter < numOfObjects; objectTypeCounter++) 
	{
		if (inputObjectName == objectName[objectTypeCounter]) // Check all input names against specifed onces.
		{
			objectIDNum = objectTypeCounter;
			firstCharOfObjectName = objectName[objectIDNum][0];

			skinLoadSuccess = skin.loadFromFile(textureDir[objectIDNum]);
			if (skinLoadSuccess)
			{
				sprite.setTexture(skin);
			}
			else
			{
				cout << "Object Texture Not Loaded" << endl;
				system("pause");
			}

			sprite.setScale(2.0f, 2.0f);

			numOfFrames = objectNumOfFrames[objectIDNum];

			if (numOfFrames > 0) // Set frames to array values.
			{
				for (int animPopCounter = 0; animPopCounter < numOfFrames; animPopCounter++)
				{
					animationFrameRects[animPopCounter] = objectAnimationFrameRects[objectIDNum][animPopCounter];
				}
			}
			else
			{
				animationFrameRects[0] = objectAnimationFrameRects[objectIDNum][0];
			}

		}
		else if ((objectTypeCounter == (numOfObjects - 1)) && (sprite.getScale().x == 0)) // If name wasn't a specifed one, output this error message.
		{
			cout << "Unidentified Object Name Input" << endl;
			system("pause");
		}
	}
}