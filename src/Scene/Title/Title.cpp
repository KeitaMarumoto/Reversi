#include "Title.h"

Title::Title()
{
}

void Title::Update()
{
}

void Title::Draw()
{
}

Scene Title::Shift()
{
	if (env.isPushKey('A')) {
		return Scene::GAMEMAIN;
	}
	return Scene::TITLE;
}
