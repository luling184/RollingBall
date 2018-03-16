#pragma once
#include "Entity.h"
class Ball :
	public Entity
{
public:
	Ball();
	~Ball();

	void update() override;
	void draw() const override;
	Circle circle;

private:
	Vec2 position;
	int32 radius;

	int32 state;
	Font font{ 10 };
};

