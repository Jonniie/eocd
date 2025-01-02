/**
 * @file beautiful_matrix.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Beautiful Matrix (https://codeforces.com/problemset/problem/263/A)
 * @version 0.1
 * @status - 
 * @date 2025-01-02
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

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int res = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int num;
            cin >> num;

            if(num == 1) {
                res += abs(2 - j) + abs(2 - i);              
            }
        }
    }

    cout << res;
    
    return (EXIT_SUCCESS);
}