#include "Result.h"

Result::Result()
{
}

void Result::Update()
{
}

void Result::Draw()
{
}

Scene Result::Shift()
{
	if (env.isPushKey('A')) {
		return Scene::TITLE;
	}
	return Scene::RESULT;
}
