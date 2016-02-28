#pragma once
#include "../Singleton.h"



class Stone
{
private:
	Vec2f pos;
	float chip_size;
	Vec2f board_size;
public:
	Stone();
	void Update();
	void Draw();
	int getMatrix();
	void setPos(Vec2f);
	void setChipSize(float);
	void setBoardSize(Vec2f);
	void setStoneStatus(Vec2i, int);
};