#include "Stone.h"

Stone::Stone()
{
	stone_status = ReadTextStone("res/board_normal.txt");
}

void Stone::Update()
{

}

void Stone::Draw()
{
	for (int i = 1; i <= stone_status.board_elem; i++) {
		for (int j = 1; j <= stone_status.board_elem; j++) {

			if (stone_status.stone_array[i][j] == StoneColor::BLACK) {
				drawFillCircle(pos.x() + (j - 1)*chip_size, (pos.y() + board_size.y() - chip_size) - (i - 1)*chip_size,
							   chip_size / 2, chip_size / 2,
							   100,
							   Color::black,
							   0, 
							   Vec2f(1.0f, 1.0f), 
							   Vec2f(-chip_size / 2, -chip_size / 2));
			}
			if (stone_status.stone_array[i][j] == StoneColor::WHITE) {
				drawFillCircle(pos.x() + (j - 1)*chip_size, (pos.y() + board_size.y() - chip_size) - (i - 1)*chip_size,
							   chip_size / 2, chip_size / 2,
							   100,
							   Color::white,
							   0, 
							   Vec2f(1.0f, 1.0f), 
							   Vec2f(-chip_size / 2, -chip_size / 2));
			}
		}
	}
}

int Stone::getMatrix()
{
	return stone_status.board_elem;
}

void Stone::setPos(Vec2f _pos)
{
	pos = _pos;
}

void Stone::setChipSize(float _chip_size)
{
	chip_size = _chip_size;
}

void Stone::setBoardSize(Vec2f _board_size)
{
	board_size = _board_size;
}

void Stone::setStoneStatus(Vec2i index, int _color)
{
	stone_status.stone_array[index.y()][index.x()] = _color;
}



StoneStatus::StoneStatus(string path)
{

}

StoneStatus::StoneStatus(vector<vector<int>> _array, int _elements)
{
	stone_array = _array;
	board_elem = _elements;
}

StoneStatus ReadTextStone(string _path)
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
