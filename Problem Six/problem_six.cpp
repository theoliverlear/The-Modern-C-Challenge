// Oliver Sigwarth
// Problem 6: Abundant Numbers
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/28/2023
// Modified: 3/28/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints all abundant numbers and their abundance,
// up to a number entered by the user.
#include <iostream>
#include <vector>
#include "problem_six.hpp"
std::vector<int> proper_divisors(int num)
{
    std::vector<int> proper_divisors_list;
    proper_divisors_list.push_back(1);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            proper_divisors_list.push_back(i);
        }
    }
    return proper_divisors_list;
}
int sum_divisors(int num)
{
    int proper_divisors_sum = 0;
    std::vector proper_divisors_list = proper_divisors(num);
    for (int i : proper_divisors_list)
    {
        proper_divisors_sum += i;
    }
    return proper_divisors_sum;
}
bool is_abundant(int num)
{
    int divisors_sum = sum_divisors(num);
    if (num < divisors_sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
std::vector<int> abundant_nums(int limit)
{
    std::vector<int> abundant_nums_list;
    for (int i = 1; i <= limit; i++)
    {
        if (is_abundant(i))
        {
            abundant_nums_list.push_back(i);
        }
    }
    return abundant_nums_list;
}
