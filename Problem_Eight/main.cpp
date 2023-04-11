// Oliver Sigwarth
// Problem 8: Armstrong Numbers
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 4/10/2023
// Modified: 4/10/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints all Armstrong numbers with three digits.
#include <iostream>
#include "problem_eight.hpp"
int main() {
    for (int num : armstrong_numbers())
    {
        std::cout << "Armstrong number: " << num << "\n";
    }
    return 0;
}
