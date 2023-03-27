// Oliver Sigwarth
// Problem 1: Sum of Naturals Divisible by 3 and 5
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/22/2023
// Modified: 3/26/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that calculates and prints the sum of all the natural numbers divisible
// by 3 or 5, up to a given limit entered by the user.
#include <iostream>
#include "problem_one.hpp"

int main()
{
    std::cout << "Please enter a number to sum the numbers divisible by three and five: ";
    long num;
    std::cin >> num;
    std::cout << "\nThe number " << num <<
                 " has a sum of numbers divisible by three and five of " <<
                 sum_3_5_divisible(num) << ".\n";
    return 0;
}
