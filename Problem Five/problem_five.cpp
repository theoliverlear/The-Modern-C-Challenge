// Oliver Sigwarth
// Problem 5: Sexy Prime Pairs
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/28/2023
// Modified: 3/28/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints all the sexy prime pairs, prime numbers that
// differ from each other by six, up to a limit entered by the user.
#include <iostream>
#include <vector>
#include "problem_five.hpp"
#include "../Problem Four/problem_four.hpp"
std::vector<std::vector<int>> sexy_prime_pairs(int limit)
{
    int number_of_pairs = 0;
    std::vector<std::vector<int>> sexy_pairs;
    int last_prime = 0;
    for (int i = 0; i < limit; i++)
    {
        if (is_prime(i))
        {
            if (is_prime(i - 6))
            {
                sexy_pairs.push_back(std::vector<int>());
                sexy_pairs[number_of_pairs].push_back(i - 6);
                sexy_pairs[number_of_pairs].push_back(i);
            }
            last_prime = i;
        }
    }
    return sexy_pairs;
}

