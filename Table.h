# pragma once
# include "Entity.h"
# include "Ball.h"
# define Last 100

class Table :
	public Entity
{
public:
	Table();
	~Table();

	void update() override;
	void draw() const override;

	int d(const Ball& ball);

private:
	int32 frame[Last][5];
	int32 tmp[Last];
	Rect rect[Last][5];
	Color color[Last][5];
};

