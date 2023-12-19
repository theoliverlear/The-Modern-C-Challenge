// Oliver Sigwarth
// Problem 8: Prime Factors of a Number
// Exercise from "The Modern C++ Challenge" by Marius Bancila
// Created: 4/18/2023
// Modified: 4/18/2023
// ------------------------------------------------------------------------------
//                                  Objective
// Write a program that prints the prime factors of a number entered by the user.
#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>

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
int lowest_prime(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (is_prime(i) && num % i == 0)
        {
            return i;
        }
    }
}

int multiples_amount(int sub_num, int super_num)
{
    for (int i = 1; i < sub_num; i++)
    {
        if (sub_num * i == super_num)
        {

        }
    }
}
std::vector<int> primes_list(int num) {
    std::map<int, int> prime_num_occurrences;

    std::vector<int> primes_list;
    for (int i = 2; i < num; i++)
    {

        if (is_prime(i) && num % i == 0)
        {
            for (int j = 0; j < (num / i); j++)
            {
              primes_list.push_back(i);
            }
        }
    }
    return primes_list;
}
std::vector<int> primes_list_two(int num) {
    std::map<int, int> prime_num_occurrences;
    std::vector<int> primes_list;
    int previous_num = 0;

    return primes_list;
}

int main() {

    for (int num : primes_list(24))
    {
        std::cout << num << "\n";
    }
    return 0;
}
