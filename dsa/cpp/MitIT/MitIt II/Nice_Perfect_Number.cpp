/**
 * @file Nice Perfect Squares.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * @version 0.1
 * @status - 
 * @date 2025-04-06
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

    int T;
    cin >> T;

    while(T--) {
        int num;
        cin >> num;
        if(num % 2 == 0) {
            int m = 45 * pow(10, num/2 - 2);
            ll res = pow(m, 2);
            cout << res;
        } else {
            int m = 205 * pow(10, (num-5)/ 2);
            ll res = pow(m, 2);
            cout << res;
        }

        cout << (T == 0 ? "" : "\n");
    }
    
    
    return (EXIT_SUCCESS);
}