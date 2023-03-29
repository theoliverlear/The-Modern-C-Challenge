// Oliver Sigwarth
// Problem 7: Amicable Numbers
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 3/28/2023
// Modified: 3/29/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints the list of all pairs of amicable numbers
// smaller than 1,000,000.
#include "problem_seven.hpp"
#include <iostream>
#include <map>
#include <set>
#include "../Problem Six/problem_six.hpp"

std::map<int, int> amicable_numbers()
{
    std::set<int> found_nums;
    int pairs_found = 1;
    std::map<int, int> amicable_nums_list;
    std::cout << "Please wait, this may take a moment...\n";
    for (int i = 1; i < 100000; i++)
    {
        int num_one = sum_divisors(i);
        int num_two = sum_divisors(num_one);
        if (i == num_two && num_one != i)
        {
            if (found_nums.contains(i))
                {
                    continue;
                }
            if (num_one < num_two)
            {
                found_nums.insert(num_two);
                found_nums.insert(sum_divisors(num_two));
                amicable_nums_list.insert(std::pair<int, int>(num_one, num_two));
                if (pairs_found == 1)
                {
                    std::cout << "Found " << pairs_found << " pair...\n";
                    pairs_found++;
                }
                else
                {
                    std::cout << "Found " << pairs_found << " pairs...\n";
                    pairs_found++;
                }
            }
            else
            {
                found_nums.insert(num_two);
                found_nums.insert(sum_divisors(num_two));
                amicable_nums_list.insert(std::pair<int, int>(num_two, num_one));
                if (pairs_found == 1)
                {
                    std::cout << "Found " << pairs_found << " pair...\n";
                    pairs_found++;
                }
                else
                {
                    std::cout << "Found " << pairs_found << " pairs...\n";
                    pairs_found++;
                }
            }
        }
    }
    return amicable_nums_list;
}
