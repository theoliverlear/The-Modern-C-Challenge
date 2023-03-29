// Oliver Sigwarth
// Problem 7: Amicable Numbers
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/28/2023
// Modified: 3/29/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints the list of all pairs of amicable numbers
// smaller than 1,000,000.
#include <iostream>
#include <map>
#include "problem_seven.hpp"
#include "../Problem Six/problem_six.cpp"
int main() {
    std::map<int, int> amicable_nums = amicable_numbers();
    std::map<int, int> :: iterator itr;
    int counter = 1;
    for (itr = amicable_nums.begin(); itr != amicable_nums.end(); itr++)
    {
        std::cout << "Pair " << counter << ": " << itr -> first << ", " << itr -> second << "\n";
        counter++;
    }
    return 0;
}
