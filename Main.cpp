# include <Siv3D.hpp>
# include "SceneName.h"
# include "Title.h"
# include "Game.h"

void Main()
{
	MyApp manager;

	manager.add<Title> (SceneName::Title);
	manager.add<Game>  (SceneName::Game);
	// manager.add<Result>(SceneName::Result;

	while (System::Update())
	{
		manager.updateAndDraw();
	}
}
