/**
 * @file the_cow_signal.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem https://usaco.org/index.php?page=viewproblem2&cpid=665
 * @version 0.1
 * @status - 
 * @date 2025-04-22
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
    
    ll M, N, K;
    cin >> M >> N >> K;

    while(M--) {
        string str;
        cin >> str;

        string res;

        for(auto chr : str) {
            for(int i = 0; i < K; i++) {
                res += chr;
            }
        }

        cout << res << endl;
    }
    return (EXIT_SUCCESS);
}