# include "stdafx.h"
# include "Game.h"


Game::Game()
{
}


Game::~Game()
{
}

void Game::update()
{
	table.update();
	ball.update();
	m_data->counter += 5;

	if (table.d(ball) == 1)
	{
		changeScene(SceneName::Result);
	}
}

void Game::draw() const
{
	table.draw();
	ball.draw();

	m_data->font(m_data->counter).draw(0, 0, Palette::Black);
}
