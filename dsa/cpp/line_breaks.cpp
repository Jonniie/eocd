/**
 * @file line_breaks.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Line Breaks (https://codeforces.com/contest/2050/problem/A)
 * @version 0.1
 * @status - 
 * @date 2024-12-05
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
        ll n,m;
        cin >> n >> m;
        ll len = 0;
        ll count = 0;
        bool state = true;


        while(n-- && state) {
            string chr;
            cin >> chr;
            if(len + chr.length() <= m) {
                count++;
            }
            len += chr.length();
        }

        cout << count << (t == 0 ? "" : "\n");
    }
    
    
    return (EXIT_SUCCESS);
}