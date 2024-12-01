/**
 * @file penchick_and_bbq_buns.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Penchick and BBQ Buns
 * @version 0.1
 * @status - 
 * @date 2024-11-30
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
        cin >> n;

        if(n < 5) {
            cout << -1;
        } else {
            ll idx = 1;

            vector<ll> nums(n, 0);

            for(ll &num : nums) {
                num += idx;
                idx += 1;
            }

            for(ll &num : nums) {
                cout << num << " ";
            }
        }

        if(t==0) {
            cout << "";
        } else {
            cout << endl;
        }

        // 12
        //  1 2 3 4 5 1 2 3 4 5 

    }
    
    
    return (EXIT_SUCCESS);
}