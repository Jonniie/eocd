/**
 * @file transfusion.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Transfusion
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
        cin >> n;
        bool state = true;

        vector<ll> nums;

        while(n--) {
            ll el;
            cin >> el;
            nums.push_back(el);
        }

        ll temp = (nums[0] + nums[2])/2;
        

        for(ll idx = 0; idx < (nums.size()/2 + 1); idx++) {
            if(idx + 3 <= nums.size()) {
                ll sum = nums[idx] + nums[idx+2];
                if(sum / 2 != temp) {
                    cout << "NO";
                    break;
                }
            }
        }

        cout << (t == 0 ? "" : "\n");
    }
    
    
    return (EXIT_SUCCESS);
}