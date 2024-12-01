/**
 * @file shohag_loves_xor.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Shohag Loves XOR (Easy Version) (https://codeforces.com/contest/2039/problem/C1)
 * @version 0.1
 * @status - TLE
 * @date 2024-11-25
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
    
    ll t;
    cin >> t;
    while(t--) {
        ll x, m, count = 0;
        cin >> x >> m;

    
        for(ll y = 1; y <= min(x*2,m); y++) {
            if(x != y) {
                ll xoor = x ^ y;
                if(x % xoor == 0 || y % xoor == 0) {
                    count++;
                }
            }
        }
        

        cout << count << (t == 0 ? "" : "\n");
    }
    return (EXIT_SUCCESS);
}