/**
 * @file Chewbaсca and Number.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem  Chewbaсca and Number(https://codeforces.com/contest/514/problem/A)
 * @version 0.1
 * @status - 
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
 * @return ll
 */

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll res = 0;

    string str;
    cin >> str;

    for(ll i = 0; i < str.size(); i++) {
        ll power = pow(10, str.size() - i - 1);
        char ch = str.at(i);

        ll curr_chr = ch - '0';

            if(i == 0 && curr_chr == 9) {
                res += (curr_chr * power);
            } else {
                if(curr_chr >= 5) {
                res += ((9-curr_chr) * power);
            } else {
                res += (curr_chr * power);
            }
        }        
    }

   cout << res;
    
    
    return (EXIT_SUCCESS);
}