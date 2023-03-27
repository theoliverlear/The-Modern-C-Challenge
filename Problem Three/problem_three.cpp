// Oliver Sigwarth
// Problem 3: Least Common Multiple
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/25/2023
// Modified: 3/26/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that will, given two or more positive integers, will calculate
// and print the greatest common divisor of the two.
#include "problem_three.hpp"
#include "../Problem Two/problem_two.cpp"
int least_common_multiple(int int_one, int int_two)
{
    return (int_one * int_two) / greatest_common_divisor(int_one,int_two);
}