#include "stdafx.h"
#include "Result.h"


Result::Result()
{
}


Result::~Result()
{
}

void Result::update()
{
	if (Input::MouseL.clicked)
	{
		m_data->counter = 0;
		changeScene(SceneName::Title);
	}
}

void Result::draw() const
{
	Window::ClientRect().draw(Palette::Rosybrown);
	m_data->font(L"score : ", m_data->counter).drawCenter(Window::Center());
}
