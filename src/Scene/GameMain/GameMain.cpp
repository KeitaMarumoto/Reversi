#include "GameMain.h"

GameMain::GameMain()
{
	board.setChipSize(stone.getMatrix());
	stone.setPos(board.getPos());
	stone.setChipSize(board.getChipSize());
	stone.setBoardSize(board.getBoardSize());
}

void GameMain::Update()
{
	board.Update();
	stone.Update();
}

void GameMain::Draw()
{
	board.Draw();
	stone.Draw();
}

Scene GameMain::Shift()
{
	if (env.isPushKey('A')) {
		return Scene::RESULT;
	}
	return Scene::GAMEMAIN;
}
