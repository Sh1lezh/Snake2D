#pragma once
#include "State.hpp"
#include <memory>
#include "Game.hpp"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <array>
#include "Snake.hpp"

class GamePlay : public Engine::State {

private : 
    std::shared_ptr<Context> m_context;
    sf::Sprite m_grass;
    sf::Sprite m_food;
    std::array<sf::Sprite, 4> m_walls;
    Snake m_snake;
    sf::Vector2f m_snakeDirection;
    sf::Time m_elapsedTime;
    sf::Text m_scoretext;
    int m_score;
    bool m_isPaused;

public:
    GamePlay(std::shared_ptr<Context> &context);
    ~GamePlay();

    void Init() override;
    void ProcessInput() override;
    void Update(sf::Time deltaTime) override;
    void Draw() override;
    void Pause() override;
    void Start() override;
};