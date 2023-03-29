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
int main() {
    std::cout << "Please enter a number to find its abundant numbers:";
    int limit = 0;
    std::cin >> limit;
    std::cout << "The abundant numbers in " << limit << " is...\n";
    std::vector<int> abundant_nums_list = abundant_nums(limit);
    if (abundant_nums_list.size() == 0)
    {
        std::cout << "The number " << limit << " contains no abundant numbers.\n";
    }
    for (int i : abundant_nums_list)
    {
        std::cout << "[Abundant: " << i << " - Abundance: " << sum_divisors(i) << "]\n";
    }
    return 0;
}
