#include "stdafx.h"
#include "Title.h"


Title::Title()
{
}


Title::~Title()
{
}

void Title::update()
{
	if (Input::MouseL.clicked)
	{
		changeScene(SceneName::Game);
	}
}

void Title::draw() const
{
	Window::ClientRect().draw(Palette::Rosybrown);
	m_data->font(L"Title   === Please MouseL Click ===").drawCenter(Window::Center());
}
