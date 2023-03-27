// Oliver Sigwarth
// Problem 1: Sum of Naturals Divisible by 3 and 5
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/22/2023
// Modified: 3/26/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that calculates and prints the sum of all the natural numbers divisible
// by 3 or 5, up to a given limit entered by the user.
#include "problem_one.hpp"
long sum_3_5_divisible(long num)
{
    long sum = 0;
    for (long i = 1; i <= num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}