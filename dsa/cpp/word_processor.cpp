/**
 * @file word_processor.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Word Processor (https://usaco.org/index.php?page=viewproblem2&cpid=987)
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
    
    ll N, K;
    cin >> N >> K;
    ll curr_size = 0;
    while(N--) {
        string word;
        cin >> word;

        ll w_l = word.size();

        if ((curr_size + w_l) < K) {
            curr_size += w_l;
            cout << word << " ";
        } else if((curr_size + w_l) == K) {
            cout << word << endl;
            curr_size = 0;
        } else {
            cout << endl << word;
            curr_size = w_l;
            if(N != 0) {
                cout << " ";
            }
        }

    }
    return (EXIT_SUCCESS);
}