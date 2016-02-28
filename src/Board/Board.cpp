#include "Board.h"

Board::Board()
{
	sub_size = 50.0f;
	outer_pos = Vec2f(-Window::WIDTH / 2, 
				-Window::HEIGHT / 2);
	outer_size = Vec2f(Window::HEIGHT, 
				 Window::HEIGHT);
	inner_pos = outer_pos + Vec2f(sub_size, sub_size);
	inner_size = outer_size - Vec2f(sub_size * 2, sub_size * 2);
	chip_size = inner_size.x() / 8;
}

void Board::Update()
{
}

void Board::Draw()
{
	drawFillBox(outer_pos.x(), outer_pos.y(),
				outer_size.x(), outer_size.y(),
				Color::black);
	drawFillBox(inner_pos.x(), inner_pos.y(),
				inner_size.x(), inner_size.y(),
				Color::green);
	for (int i = 0; i < 8; i++) {
		drawLine(inner_pos.x() + i*chip_size, inner_pos.y(),
				 inner_pos.x() + i*chip_size, inner_pos.y() + inner_size.y(),
				 2,
				 Color::black);
		drawLine(inner_pos.x(), inner_pos.y() + i*chip_size,
				 inner_pos.x() + inner_size.x(), inner_pos.y() + i*chip_size,
				 2,
				 Color::black);
	}
}

void Board::TouchMatrix()
{
	Vec2f mpos = env.mousePosition();
}

Vec2f Board::getPos()
{
	return inner_pos;
}

float Board::getChipSize()
{
	return chip_size;
}

Vec2f Board::getBoardSize()
{
	return inner_size;
}

void Board::setChipSize(int _elem)
{
	board_elem = _elem;
	chip_size = inner_size.x() / _elem;
}
