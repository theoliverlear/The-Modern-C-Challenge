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
#include "../Problem Four/problem_four.hpp"
#include "../Problem Four/problem_four.cpp"
#include "problem_five.hpp"

int main() {
    std::cout << "Please enter a number to find its sexy prime number pairs: ";
    int limit_choice = 0;
    std::cin >> limit_choice;
    std::vector<std::vector<int>> sexy_prime_pairs_vector = sexy_prime_pairs(limit_choice);
    std::cout << "The number " << limit_choice << " has the following sexy prime pairs..." << "\n";
    for (std::vector<int> pair : sexy_prime_pairs_vector)
    {
        int bracket_pos = 3;
        for (int sexy_prime : pair)
        {
            if (bracket_pos % 2 != 0)
            {
               std::cout << "[" << sexy_prime << ", ";
            }
            else
            {
                std::cout << sexy_prime << "]\n";
            }
            bracket_pos++;
        }
    }
}
