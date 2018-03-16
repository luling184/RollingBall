#pragma once
class Game
	: public MyApp::Scene
{
public:
	Game();
	~Game();

	void update() override;
	void draw() const override;

};

