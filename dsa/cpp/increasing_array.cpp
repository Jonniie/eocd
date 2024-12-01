/**
 * @file increasing_array.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Increasing Array (https://cses.fi/problemset/task/1094)
 * @version 0.1
 * @date 2024-11-21
 *
 * @copyright Copyright (c) 2024
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
    
    ll moves = 0;
    ll in;
    cin >> in;
    vector<ll> nums(in);

    for(ll i = 0; i < in; i++) {
        ll temp;
        cin >> temp;
        nums[i] = temp;
    }

    for(ll i = 1; i < in; i++) {
        if(nums[i] < nums[i-1]) {
            moves += nums[i-1] - nums[i];
            nums[i] = nums[i-1];
        }
    }

    cout << moves;

    return (EXIT_SUCCESS);
}