// Oliver Sigwarth
// Problem 2: Greatest Common Divisor
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/24/2023
// Modified: 3/26/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that, given two positive integers, will calculate and print
// the greatest common divisor of the two.
#include <vector>
#include <iostream>
#include "problem_two.hpp"
int greatest_common_divisor(int int_one, int int_two)
{
    if (int_one <= 0 || int_two <= 0)
    {
        std::cout << "You cannot use negative numbers. Function will compute using the absolute value.\n";
    }
    int_one = abs(int_one);
    int_two = abs(int_two);
    std::vector<int> shared_divisors;
    if (int_one < int_two)
    {
        for (int i = 1; i <= int_one; i++)
        {
            if (int_one % i == 0 && int_two % i == 0)
            {
            shared_divisors.insert(shared_divisors.begin(), i);
            }
        }
    }
    else if (int_one > int_two)
    {
        for (int i = 1; i <= int_two; i++)
        {
            if (int_one % i == 0 && int_two % i == 0)
            {
            shared_divisors.insert(shared_divisors.begin(), i);
            }
        }
    }
    else if (int_one == int_two)
    {
        return int_one;
    }
    return shared_divisors[0];
}