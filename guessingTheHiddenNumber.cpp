// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if the user's
// number between 0 and 9 is equal to the hidden number

#include <iostream>

const int HIDDEN_NUMBER = 5;
int chosenNumber;

int main() {
    // Finds if the chosen number from 0 to 9 is equal to the hidden number

    std::cout << "Enter a number from 0-9: ";
    std::cin >> chosenNumber;
    std::cout << std::endl;
    if (chosenNumber == HIDDEN_NUMBER) {
        std::cout << "You got the number right!";
    }
    if (chosenNumber != HIDDEN_NUMBER) {
        std::cout << "You got the number wrong.";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
