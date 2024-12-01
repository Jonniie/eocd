/**
 * @file shohag_loves_strings.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Shohag Loves Mod (https://codeforces.com/contest/2039/problem/A)
 * @version 0.1
 * @date 2024-11-24
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

    ll n;
    cin >> n;

    for(ll i = 0; i < n; i++) {
        // // for the first tc
        ll t;
        cin >> t;
        ll idx = 1;
        set<int> mods = {};

        for(ll num = 2; num < 100 && t > 0; num++) {
            ll curr_mod = num % idx;
            if(mods.find(curr_mod) == mods.end()) {
                cout << num << (t == 1 ? "" : " ");
                mods.insert(curr_mod);
                ++idx;
                --t;
            }
        }


        cout << (i == n-1 ? "" : "\n");
    }
    
    
    return (EXIT_SUCCESS);
}