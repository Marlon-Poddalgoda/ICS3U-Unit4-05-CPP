// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program calculates the sum of all positive integers
//      entered by a user using a loop

#include <iostream>
#include <string>

int main() {
    // This function calculates the sum of all positive integers
    //      entered by a user using a loop

    std::cout << "This program calculates the sum of all "
                 " positive integers entered by a user."
              << std::endl;

    // variable declarations
    int total = 0;
    std::string howManyNum;
    int howManyInt;
    std::string userAdd;
    int userAddInt;

    // input
    std::cout << "Enter how many numbers you want to add up: ";
    std::cin >> howManyNum;
    std::cout << "" << std::endl;

    // process
    try {
        howManyInt = std::stoi(howManyNum);

        if (howManyInt > 0) {
            while (howManyInt > 0) {
                std::cout << "Enter a number to add: ";
                std::cin >> userAdd;
                try {
                    // making sure user enteres number
                    userAddInt = std::stoi(userAdd);

                    howManyInt = howManyInt - 1;
                    // if statement to ignore negative numbers
                    if (userAddInt < 0) {
                       std::cout << "Negative numbers will not be "
                                 << "added." << std::endl;
                        continue;
                    } else {
                       total = total + userAddInt;
                    }
                } catch (std::invalid_argument) {
                   std::cout << "That's not a number! Try again." << std::endl;
                }
            }
            std::cout << "" << std::endl;
            std::cout << "The sum of all positive numbers is "
                      << total << std::endl;

        } else {
            // output
            std::cout << howManyInt << " is not a positive integer!"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for playing!" << std::endl;
}
