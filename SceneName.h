# pragma once

# include "CommonData.h"

enum class SceneName
{
	Title,
	Game,
	Result,
};

using MyApp = SceneManager<SceneName, CommonData>;