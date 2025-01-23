/**
 * @file ocde.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * @version 0.1
 * @status - 
 * @date 2025-01-19
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
    


    return (EXIT_SUCCESS);
}

// int main(void) {
//     ll t;
//     cin >> t;

//     while(t--) {
//         ll num;
//         string s;

//         cin >> num;
//         cin >> s;

//         unordered_map<char, int> m;

//         for(auto ch: s) {
//             m[ch]++;
//         }

//         for(auto el : m) {
//             cout << el.first << " " << el.second << endl;
//         }

//         if(m['I'] == m['T'] && m['I'] % 2 == 0 && m['M'] % 2 != 0) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }

//         if(t == 0) {
//             cout << "";
//         } else {
//             cout << endl;
//         }
//     }
    
// }

// int main(void) {
//     ll n, q;

//     cin >> n >> q;

//     vector<int> nums;

//     while(n--) {
//         int num;
//         cin >> num;

//         nums.push_back(num);
//     }

//     while(q--) {
//         int num;

//         int q, l, r;

//         cin >> q >> l >> r;

//         int res = 1;

//         if(q == 1) {
//             nums[l-1] = r;
//         } else {
//             unordered_set<int> allNumbers = {1,2,3,4,5};

//             for(int i = l-1; i < r; i++) {
//                 allNumbers.erase(nums[i]);
//             }

//              vector<int> missingNumbers(allNumbers.begin(), allNumbers.end());

//             cout << missingNumbers[0];

//             if(q == 0) {
//                 cout << "";
//             } else {
//                 cout << endl;
//             }
//         }
//     }

//     return 0;
// }