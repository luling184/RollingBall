# include <Siv3D.hpp>
# include "SceneName.h"
# include "Title.h"
# include "Game.h"
# include "Result.h"

void Main()
{
	Window::Resize(640, 800);
	Graphics::SetBackground(Palette::White);
	MyApp manager;

	manager.add<Title> (SceneName::Title);
	manager.add<Game>  (SceneName::Game);
	manager.add<Result>(SceneName::Result);

	while (System::Update())
	{
		manager.updateAndDraw();
	}
}
