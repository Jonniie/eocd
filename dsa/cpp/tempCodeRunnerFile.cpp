/**
 * @file shohag_loves_string.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Shong 
 * @version 0.1
 * @status - WA
 * @date 2024-11-24
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

    for(ll i = 0; i < n; i++) {
        string word;
        cin >> word;

        bool state = false;

        for(ll i = 0; i < word.size(); i++){
            string ss = word.substr(i, 3);
            if(ss[0] == ss[1]) {
                cout << ss.substr(0,2);
                state = true;
                cout << i << " a ";
                break;
            } else if (ss[1] == ss[2]) {
                cout << ss.substr(1,2);
                state = true;
                cout << ss[1] << " " << ss[2];
                break;
            } else if(ss.size() == 3 && (ss[0] != ss[1]) && (ss[1] != ss[2]) && (ss[0] != ss[2])) {
                cout << ss;
                state = true;
                cout << i << " c ";
                break;
            }  else {
                cout << ss;
            }
        }

        if(!state) {
            cout << -1;
        }


        cout << (i == n-1 ? "" : "\n");
    }
    
    return (EXIT_SUCCESS);
}