# pragma once
# include "Ball.h"
# include "Table.h"

class Game
	: public MyApp::Scene
{
public:
	Game();
	~Game();

	void update() override;
	void draw() const override;


private:
	Ball ball;
	Table table;
};

