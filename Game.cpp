#include "stdafx.h"
#include "Game.h"


Game::Game()
{
}


Game::~Game()
{
}

void Game::update()
{
	
}

void Game::draw() const
{
	Window::ClientRect().draw(Palette::Crimson);
	m_data->font(L"Game   === Please MouseL Click ===").drawCenter(Window::Center());
}
