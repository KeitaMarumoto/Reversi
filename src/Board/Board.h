#pragma once
#include "../Singleton.h"

class Board
{
private:
	float sub_size;
	float chip_size;
	Vec2f outer_pos;
	Vec2f outer_size;
	Vec2f inner_pos;
	Vec2f inner_size;
	int board_elem;

public:
	Board();
	void Update();
	void Draw();
	void TouchMatrix();
	Vec2f getPos();
	float getChipSize();
	Vec2f getBoardSize();
	void setChipSize(int);
};