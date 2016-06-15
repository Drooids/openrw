#include "State.hpp"
#include "RWGame.hpp"

// This serves as the "initial" camera position.
ViewCamera defaultView({-250.f, -550.f, 75.f},
                       glm::angleAxis(glm::radians(5.f),
                                      glm::vec3(0.f, 1.f, 0.f)));

const ViewCamera& State::getCamera() { return defaultView; }

bool State::shouldWorldUpdate() { return false; }

GameWorld* State::getWorld() { return game->getWorld(); }

sf::RenderWindow& State::getWindow() { return game->getWindow(); }
