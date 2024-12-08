#ifndef LARGESTNUMBERGAME_H
#define LARGESTNUMBERGAME_H

#include "Game.h"

class LargestNumberGame : public Game {
public:
    void play() override;               // Implements game logic
    std::string getBadge() override;    // Returns the badge for winning
};

#endif

