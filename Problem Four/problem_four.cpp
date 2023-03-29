// Oliver Sigwarth
// Problem 4: Largest Prime Smaller Than Given Number
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/27/2023
// Modified: 3/27/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that computes and prints the largest prime number that is
// smaller than a number provided by the user, which must be a positive integer.
#include <iostream>
#include "problem_four.hpp"
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    else if (num == 2 || num == 3 || num == 5)
    {
        return true;
    }
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int largest_prime_number(int num)
{
    int temp_prime = 0;
    for (int i = 0; i < num; i++)
    {
        if (is_prime(i))
        {
            if (i > temp_prime)
            {
                temp_prime = i;
            }
        }
    }
    return temp_prime;
}

