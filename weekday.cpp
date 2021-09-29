// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program converts the number to its corresponding weekday

#include <iostream>
#include <string>

int main() {
    // This program converts the number to its corresponding weekday
    std::string userInputString;
    int userInput;

    // input
    std::cout << "Enter the number of the weekday (ex: 5 for Thursday) : ";
    std::cin >> userInputString;

    userInput = atoi(userInputString.c_str());

    // process and output
    try {
        switch (userInput) {
            case 1 :
                std::cout << "Sunday" << std::endl;
                break;
            case 2 :
                std::cout << "Monday" << std::endl;
                break;
            case 3 :
                std::cout << "Tuesday" << std::endl;
                break;
            case 4 :
                std::cout << "Wednesday" << std::endl;
                break;
            case 5 :
                std::cout << "Thursday" << std::endl;
                break;
            case 6 :
                std::cout << "Friday" << std::endl;
                break;
            case 7 :
                std::cout << "Saturday" << std::endl;
                break;
            default :
                std::cout << "Invalid input." << std::endl;
        }
    }  catch (std::invalid_argument) {
        std::cout << "Not a valid input.";

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
