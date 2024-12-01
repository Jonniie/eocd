/**
 * @file letter_pyramid.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Letter Pyramid (CPP Udemy Course)
 * @version 0.1
 * @date 2024-11-19
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

    string input;
    cin >> input;

    ll size = input.size();
    ll width = size*2 - 1;
    ll temp_width = 1;
    ll idx = 0;

    while(idx < size) {
        // forward
        for(ll i = 0; i < (width - temp_width)/2; i++){
            cout << " ";
        }
        for(ll i = 0; i < idx; i++) {
            cout << input[i];
        }

        // backward
        for(ll i = idx; i >= 0; i--) {
            cout << input[i];
        }
        for(int i = 0; i < (width - temp_width)/2; i++){
            cout << " ";
        }

        idx++;
        temp_width += 2;
        cout << endl;
    }
    
    return (EXIT_SUCCESS);
}