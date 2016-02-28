#include "BoardData.h"


StoneStatus BoardData::ReadTextStone(string _path)
{
	ifstream in_file(_path);
	assert(in_file);

	vector<vector<int>> _status;
	int _board;
	in_file >> _board;

	for (int i = 0; i < _board + 2; i++) {
		vector<int> _column;
		for (int j = 0; j < _board + 2; j++) {
			int _elem;
			in_file >> _elem;
			_column.push_back(_elem);
		}
		_status.push_back(_column);
	}

	StoneStatus _stone_status = {
		_status,
		_board
	};

	return _stone_status;
}