// Copyright 2026 Mignonnegihozo-star
// Created by: Mignonne Gihozo
// Created on: Oct 2026
// This program checks if a user's guess matches the correct answer.

#include <iostream>

int main() {
    // constants
    const int CORRECT_ANSWER = 2;

    // variables
    int userNumber;

    // input
    std::cout << "Enter a number: ";
    std::cin >> userNumber;
    std::cout << std::endl;

    // process & output
    // Check if the user is correct
    if (userNumber == CORRECT_ANSWER) {
        std::cout << "you are correct" << std::endl;
    }

    // Check if the user is incorrect
    if (userNumber != CORRECT_ANSWER) {
        std::cout << "you are not correct" << std::endl;
    }
}
