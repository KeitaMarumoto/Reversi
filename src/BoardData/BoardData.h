#pragma once
#include "../Singleton.h"

//TODO:�e�L�X�g����̓��I�z��A�v�f���A�ꕔ��Board��Stone�̃f�[�^����������o������ł���悤�ɂ���B

struct StoneStatus
{
	vector<vector<int>> stone_array;
	int board_elem;
	StoneStatus() = default;
	StoneStatus(string);
	StoneStatus(vector<vector<int>>, int);
};

//������GameMain�̗l�X�ȃN���X�Ŏg���f�[�^���Ǘ�����
class BoardData
{
private:
	
public:
	StoneStatus ReadTextStone(string);
};

