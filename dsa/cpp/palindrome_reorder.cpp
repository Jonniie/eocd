/**
 * @file palindrome_reorder.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Palindrome Reorder (https://cses.fi/problemset/task/1755)
 * @version 0.1
 * @status - ACCEPTED
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

    string ss;
    string front = "";
    string res = "";
    string mid = "";
    cin >> ss;

    sort(ss.begin(), ss.end());

    unordered_map <char, int> hm;   

    for(auto ch : ss) {
        hm[ch]++;
    }

    for(auto [key, val] : hm) {
        if(val % 2 != 0 ){        
            if(ss.length() % 2  == 0) {
                cout << "NO SOLUTION";
                return 0;
            }

            mid += key;
            if(mid.length() >= 2) {
                cout << "NO SOLUTION";
                return 0;
            }
            
        }
    }

    for(auto & [ key, val ] : hm) {
        

        string ns = string(val/2, key);
        // cout << ns;
        front += ns;
    }

    res += front;
    reverse(front.begin(), front.end());
    res += mid + front;

    cout << res;  

    
    
    return (EXIT_SUCCESS);
}