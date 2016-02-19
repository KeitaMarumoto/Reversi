#include "GameMain.h"

GameMain::GameMain()
{
}

void GameMain::Update()
{
}

void GameMain::Draw()
{
	board.Draw();
}

Scene GameMain::Shift()
{
	if (env.isPushKey('A')) {
		return Scene::RESULT;
	}
	return Scene::GAMEMAIN;
}
