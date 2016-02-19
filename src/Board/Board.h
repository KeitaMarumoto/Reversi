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
public:
	Board();
	void Update();
	void Draw();
};