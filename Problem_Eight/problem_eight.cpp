// Oliver Sigwarth
// Problem 8: Armstrong Numbers
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 4/10/2023
// Modified: 4/10/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints all Armstrong numbers with three digits.
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "problem_eight.hpp"
std::vector<int> armstrong_numbers()
{
    std::vector<int> nums;
    for (int i = 100; i < 1000; i++)
    {
        int num = 0;
        std::string as_string = std::to_string(i);
        int sum = 0;
        for (int j = 0; j < as_string.length(); j++) {
            num = std::stoi(std::to_string(as_string[j])) - 48;
            sum += pow(num, as_string.length());
        }
        if (sum == i)
        {
            nums.insert(nums.cend(), sum);
        }
    }
    return nums;
}
