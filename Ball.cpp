#include "stdafx.h"
#include "Ball.h"


Ball::Ball()
	: position(100+40+1, 80*6+40)
	, radius(38)
{
	circle = Circle(position, radius);
	state = 1;
}


Ball::~Ball()
{
}

void Ball::update()
{
	if (Input::KeyLeft.clicked)
	{
		if (state != 1)
		{
			circle.x -= 80;
			state--;
		}
	}
	if (Input::KeyRight.clicked)
	{
		if (state != 5)
		{
			circle.x += 80;
			state++;
		}
	}
}

void Ball::draw() const
{
	circle.draw(Palette::Black);
	font(state).draw(0, 0, Palette::Black);
}
