/**
 * @file bit++.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Bit++ (https://codeforces.com/problemset/problem/282/A)
 * @version 0.1
 * @status - Accepted
 * @date 2025-01-01
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
    
    ll n;
    cin >> n;

    ll res = 0;
    while(n--) {
        string str;
        cin >> str;

        for(int i = 0; i < str.size();) {
            if(str.at(i) != 'X') {
                if(str.at(i) == '-') {
                    res -= 1;
                } else {
                    res += 1;
                }
                i+=2;
            } else {
                i++;
            }
        }

    }

    cout << res;
    
    return (EXIT_SUCCESS);
}