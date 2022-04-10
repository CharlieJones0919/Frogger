#pragma once
#ifndef GROUNDTILE_H
#define GROUNDTILE_H

#include "NonPlayerObject.h"

class GroundTile : public NonPlayerObject
{
private:
	bool winningBoxHasBeenTriggered;

public:
	GroundTile();
	~GroundTile();

	void setTilePosition(int acrossNum, int downNum);
	sf::String getGroundType();
	void setWinningBox();
	void unsetWinningBox();
	bool getWinningBoxHasBeenTriggered();

};

#endif