#pragma once
#include "../Singleton.h"

//TODO:テキストからの動的配列、要素数、一部のBoardとStoneのデータをここから出し入れできるようにする。

struct StoneStatus
{
	vector<vector<int>> stone_array;
	int board_elem;
	StoneStatus() = default;
	StoneStatus(string);
	StoneStatus(vector<vector<int>>, int);
};

//ここでGameMainの様々なクラスで使うデータを管理する
class BoardData
{
private:
	
public:
	StoneStatus ReadTextStone(string);
};

