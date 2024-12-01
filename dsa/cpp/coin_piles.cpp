/**
 * @file coin_piles.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Coin Piles
 * @version 0.1
 * @status - 
 * @date 2024-11-26
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
        ll a,b;
        cin >> a >> b;

        if((a+b)%3 != 0 || a == 0 || b == 0 ) {
            cout << "NO";
        } else if(a > b){
            if(a > b*2) cout << "NO";
        } else if(b > a) {
            if(b > a*2) cout << "NO";
        } else  {
            cout << "YES";
        }

        if(t == 0) {
            cout << "";
        } else {
            cout << endl;
        }
    }
    
    return (EXIT_SUCCESS);
}