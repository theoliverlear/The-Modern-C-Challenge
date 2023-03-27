// Oliver Sigwarth
// Problem 3: Least Common Multiple
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/25/2023
// Modified: 3/26/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that will, given two or more positive integers, will calculate
// and print the greatest common divisor of the two.
#include <iostream>
#include <vector>
#include "problem_three.hpp"

int main()
{
    std::cout << least_common_multiple(4,  6) << "\n";
    return 0;
}