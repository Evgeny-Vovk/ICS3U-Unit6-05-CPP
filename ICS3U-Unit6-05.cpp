// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : January 2023
// ICS3U-Unit6-05.cpp File, learning functions with parameters in C++.

#include <iostream>
#include <list>
#include <string>

int smallestNumber(std::list<int> grades) {
    int mark;
    int sum = 0;
    int average = 0;
    int length = 0;
    for (int mark : grades) {
        sum += mark;
        length += 1;
    }
    average = sum / length;
    return average;
}

int main() {
    // creating variables
    std::list<int> grades;
    int mark;
    int average;

    try {
        std::cout << "Please enter one mark at a time. Enter -1 to end.\n";
        std::cout << "What is your mark? (as %): ";
        std::cin >> mark;

        while (mark != -1) {
            grades.push_back(mark);
            std::cout << "What is your mark? (as %): ";
            std::cin >> mark;
        }

        average = smallestNumber(grades);
        std::cout << "\nThe average of all grades is " << average << ".";
    } catch(std::invalid_argument) {
        std::cout << "Invalid input, please try again";
    }

    std::cout << "\n\n\nDone.\n";
}
