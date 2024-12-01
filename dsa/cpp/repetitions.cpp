/**
 * @file repetitions.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Repetitions (https://cses.fi/problemset/task/1069)
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
    
    string str {""};

    cin >> str;
    ll count = 0;
    ll temp = 0;
    char curr_str = str[0];

    for(char ch : str) {
        if(ch == curr_str) {
            temp+=1;
        }  else {
            count = max(count, temp);
            temp = 1;
            curr_str = ch;
        }
    }

    count = max(count, temp);

    cout << count;
    return (EXIT_SUCCESS);
}