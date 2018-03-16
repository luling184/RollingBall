#include "stdafx.h"
#include "Table.h"


Table::Table()
{
	for (int i = 0; i < Last; ++i)
	{
		tmp[i] = 0;
	}
	for (int32 i = 0; i < Last; ++i)
	{
		for (int32 k = 0; k < 5; ++k)
		{
			if (Random(1,10) != 5)
			{
				frame[i][k] = 0;
			}
			else
			{
				if (tmp[i] <= 4)
				{
					frame[i][k] = 2;
					tmp[i]++;
				}
				else
				{
					frame[i][k] = 0;
				}
			}
			rect[i][k] = Rect(80*k+100, 80*i, 80, 80);
			color[i][k] = RandomColor();
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		frame[Last-1][i] = 1;
	}
}


Table::~Table()
{
}

void Table::update()
{
	for (int32 i = 0; i < Last; ++i)
	{
		for (int32 k = 0; k < 5; ++k)
		{
			rect[i][k].y -= 5;
		}
	}
}

void Table::draw() const
{
	for (int32 i = 0; i < Last; ++i)
	{
		for (int32 k = 0; k < 5; ++k)
		{
			if (frame[i][k] == 1)
			{
				rect[i][k].draw(Palette::Red);
			}
			else
			{
				rect[i][k].draw(frame[i][k] > 1 ? Palette::Black : color[i][k]);
			}
		}
	}
}

int Table::d(const Ball& ball)
{
	for (int32 i = 0; i < Last; ++i)
	{
		for (int32 k = 0; k < 5; ++k)
		{
			if (frame[i][k] >= 1)
			{
				if (ball.circle.intersects(rect[i][k]))
				{
					return true;
				}
			}
		}
	}
	return false;
}
