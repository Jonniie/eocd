/**
 * @file cassidoo_24-03-25.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * @version 0.1
 * @status - 
 * @date 2025-03-24
 *
 * @copyright Copyright (c) 2025
 *
 */

/** Problem Statement
Write a function that finds the longest streak of consecutive true values in a boolean array that meets or exceeds a given streak goal. Return 0 if no such streak exists.

Examples:

findLongestStreak([true, true, false, true, true, true], 3)
3

findLongestStreak([true, true, true, false, true], 4)
0

findLongestStreak([true, true, true, true], 2)
4
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

/**
 * @brief The main function
 *
 * @return int
 */

int findLongestStreak(vector<int> arr, int n) {
    int res = 0;
    int temp = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i]) {
            temp++;
        } else {
            res = max(res, temp);
            temp = 0;
        }
    }
    res = max(res, temp);

    if(res < n) return 0;
    return res;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> e1 = {true, true, false, true, true, true};
    vector<int> e2 = {true, true, true, false, true};
    vector<int> e3 = {true, true, true, true};
    int res1 = findLongestStreak(e1, 3);
    int res2 = findLongestStreak(e2, 4);
    int res3 = findLongestStreak(e3, 2);

    cout << res1 << endl;  // 3 
    cout << res2 << endl;  // 0 
    cout << res3 << endl;  // 4
    
    return (EXIT_SUCCESS);
}