/**
 * @file cover_in_water.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Cover in Water
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
        ll n;
        string str;
        cin >> n >> str;
        ll count = 0;


        for(ll i = 0; i < str.length(); i++) {
            if(str.substr(i,3) == "...") {
                count = 2;
                break;
            } 

            if(str[i] == '.') {
                count += 1;
            }
        }

        cout << count << (t == 0 ? "" : "\n");
    }
    
    
    return (EXIT_SUCCESS);
}