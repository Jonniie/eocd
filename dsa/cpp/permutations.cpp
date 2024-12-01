/**
 * @file permutations.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Permutations (https://cses.fi/problemset/task/1070)
 * @version 0.1
 * @date 2024-11-21
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
    
    ll n;
    cin >> n;

    if(n == 1) {
        cout << 1;
        return 0;
    } else if(n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    } else if (n == 4 ) {
        cout << "2 4 1 3";
        return 0;
    }

    vector <int> even;
    vector <int> odd;

    for(ll i = 1; i <= n ; i++) {
        i % 2 == 0 ? even.push_back(i) : odd.push_back(i);
    }

    reverse(even.begin(), even.end());
    reverse(odd.begin(), odd.end());

    for(auto el : even) {
        cout << el << " ";
    }

    for(auto el : odd) {
        cout << el << (el != odd[odd.size()-1] ?  " " : "");
    }

    return (EXIT_SUCCESS);
}