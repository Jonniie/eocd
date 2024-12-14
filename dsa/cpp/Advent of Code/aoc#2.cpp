/**
 * @file aoc#2.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Red-Nosed Reports (https://adventofcode.com/2024/day/2)
 * @version 0.1
 * @status - 
 * @date 2024-12-02
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

// Part A
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
    
//     ifstream inputFile("aoc#2.txt");

//     if(!inputFile) {
//         cerr << "Unable to open file" << endl;
//         return 1;
//     }

//     ll count = 0;

//     string line; 

//     while (std::getline(inputFile, line)) {
//         vector<int> list; 
//         istringstream iss(line); 
//         int number;

//         while (iss >> number) {
//             list.push_back(number); 
//         }

//         bool state = true;
        
//         if (list.size() < 2) {
//             cout << "unsafe ";
//             state = false;
//         }

//         bool ascending = (list[0] < list[1]);
    
//         for (size_t i = 0; i < list.size() - 1; i++) {
//             int curr_num = list[i];
//             int next_num = list[i + 1];
//             int diff = ascending ? next_num - curr_num : curr_num - next_num;

//             if (diff > 0 && diff <= 3 && ((ascending && next_num > curr_num) || (!ascending && next_num < curr_num))) {
//                 continue; 
//             } else {
//                 cout << "unsafe ";
//                 state = false;
//                 break;
//             }
//         }


//         if(state) {
//             cout << "safe ";
//             count++;
//         }
//     }

  

//     cout << count << endl;
    
//     return (EXIT_SUCCESS);
// }

// Part B

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ifstream inputFile("aoc#2.txt");

    if(!inputFile) {
        cerr << "Unable to open file" << endl;
        return 1;
    }

    ll count = 0;

    string line; 

    while (std::getline(inputFile, line)) {
        vector<int> list; 
        istringstream iss(line); 
        int number;

        while (iss >> number) {
            list.push_back(number); 
        }

        bool state = true;
        
        if (list.size() < 2) {
            cout << "unsafe ";
            state = false;
        }

        bool ascending = (list[0] < list[1]);

        for (size_t i = 0; i < list.size() - 1; i++) {
            vector<int> copy;

            for (size_t j = 0; j < list.size(); j++) {
                if (j != i) { 
                    copy.push_back(list[j]);
                }
            }

            for(size_t k = 0; k < copy.size() - 1; k++) {
                int curr_num = list[k];
                int next_num = list[k + 1];
                int diff = ascending ? next_num - curr_num : curr_num - next_num;

                if (diff > 0 && diff <= 3 && ((ascending && next_num > curr_num) || (!ascending && next_num < curr_num))) {
                    continue; 
                } else {
                    cout << "unsafe ";
                    state = false;
                    break;
                }
            }

            if(state) {
                // cout << "safe ";
                count++;
                break;
            }
        }
        


        // if(state) {
        //     cout << "safe ";
        //     count++;
        // }
    }

  

    cout << count << endl;
    
    return (EXIT_SUCCESS);
}