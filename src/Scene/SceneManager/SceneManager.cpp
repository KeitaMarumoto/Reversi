#include "SceneManager.h"

SceneManager::SceneManager()
{
	scene = make_shared<Title>();
	scene_num = Scene::TITLE;
}

void SceneManager::Update()
{
	scene->Update();
}

void SceneManager::Draw()
{
	scene->Draw();
}

void SceneManager::Shift()
{
	if (scene_num != scene->Shift()) {
		scene_num = scene->Shift();
		switch (scene_num)
		{
		case Scene::TITLE:
			scene = make_shared<Title>();
			break;

		case Scene::GAMEMAIN:
			scene = make_shared<GameMain>();
			break;

		case Scene::RESULT:
			scene = make_shared<Result>();
			break;

		default:
			break;
		}
	}
}