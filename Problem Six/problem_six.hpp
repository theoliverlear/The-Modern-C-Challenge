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
std::vector<int> proper_divisors(int num);
int sum_divisors(int num);
std::vector<int> abundant_nums(int limit);
