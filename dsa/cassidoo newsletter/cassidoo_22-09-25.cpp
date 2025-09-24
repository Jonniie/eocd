/**
 * @file cassidoo_22-09-25.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * Write a function that determines if a number is abundant, deficient, perfect, or amicable. 
 * @version 0.1
 * @status - solved
 * @date 2025-09-24
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

/**
 * @brief The main function
 *
 * @return int
 */

string whatKindOfNumber(int num) {
    int num_sqrt = sqrt(num);

    int res = 0;

    unordered_map<int, string> res_map = {{0, "perfect"}, {1, "abundant"}, {2, "deficient"}};

    for(int i = 1; i <= num_sqrt; i++) {
        int div = num / i;
        if(div != i) {
            res += div + i;
        } else {
            res += i;
        }
    }

    res -= num;

    if(res == num) return res_map[0];
    if(res > num) return res_map[1];
    if(res < num) return res_map[2];

    return "";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cout << whatKindOfNumber(4) << endl; // deficient
    cout << whatKindOfNumber(6) << endl; // perfect
    cout << whatKindOfNumber(12) << endl; // abundant
    cout << whatKindOfNumber(22) << endl; // abundant
    
    return (EXIT_SUCCESS);
}