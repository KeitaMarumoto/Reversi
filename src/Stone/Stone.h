#pragma once
#include "../Singleton.h"

struct StoneStatus
{
	vector<vector<int>> stone_array;
	int board_elem;
	StoneStatus() = default;
	StoneStatus(string);
	StoneStatus(vector<vector<int>>, int);
};

class Stone
{
private:
	StoneStatus stone_status;
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

StoneStatus ReadTextStone(string);