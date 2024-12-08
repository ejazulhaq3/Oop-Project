#include "LargestNumberGame.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void LargestNumberGame::play() {
    srand(time(0)); // Seed for randomness

    // Generate a random list of numbers
    std::vector<int> numbers;
    for (int i = 0; i < 5; ++i) {
        numbers.push_back(rand() % 100 + 1); // Random numbers between 1 and 100
    }

    // Display the numbers
    std::cout << "Find the largest number from this list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\nYour answer: ";

    int playerChoice;
    std::cin >> playerChoice;

    // Determine the correct answer
    int largest = *std::max_element(numbers.begin(), numbers.end());

    // Check the player's input
    if (playerChoice == largest) {
        std::cout << "Correct! You earned a Largest Number Badge!\n";
    }
    else {
        std::cout << "Incorrect. The largest number was " << largest << ". Better luck next time!\n";
    }
}

std::string LargestNumberGame::getBadge() {
    return "Largest Number Badge";
}
