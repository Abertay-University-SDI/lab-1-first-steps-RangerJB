#pragma once

#include "Framework/BaseLevel.h"

class Level : BaseLevel{
public:
	Level(sf::RenderWindow& window, Input& input);
	~Level() override = default;

	void handleInput(float dt) override;
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.

	// Default variables for level class.
	sf::CircleShape m_snake;
	float m_snakeSpeed = 300.0f;


	enum class snakeDirection {UP,DOWN,LEFT,RIGHT};
	snakeDirection m_direction;
};