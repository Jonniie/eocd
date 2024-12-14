/**
 * @file aoc#1_Historial_Hysteria.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Historical Hysteria (https://adventofcode.com/2024/day/1)
 * @version 0.1
 * @status - 
 * @date 2024-12-01
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

//     ifstream inputFile("aoc#1.txt");

//     if(!inputFile) {
//         cerr << "Unable to open file" << endl;
//         return 1;
//     }

//     vector<int> list1;
//     vector<int> list2;
//     ll sum = 0;

//     ll x , y;

//     while(inputFile >> x >> y) {
//         list1.push_back(x);
//         list2.push_back(y);
//     }

//     sort(list1.begin(), list1.end());
//     sort(list2.begin(), list2.end());
    
//     for(ll i = 0; i < list1.size(); i++) {
//         sum += abs(list1[i] - list2[i]);
//     }

//     cout << sum;

//     inputFile.close();
    
//     return (EXIT_SUCCESS);
// }

// Part B
int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    ifstream inputFile("aoc#1.txt");

    if(!inputFile) {
        cerr << "Unable to open file" << endl;
        return 1;
    }

    vector<int> list1;
    vector<int> list2;
    ll sum = 0;

    ll x , y;

    while(inputFile >> x >> y) {
        list1.push_back(x);
        list2.push_back(y);
    }

    unordered_map<ll,ll> map2;

    for(ll num : list2) {
        map2[num]++;
    }

    for(ll num : list1) {
        sum += num * map2[num];
    }
    
    

    cout << sum;

    inputFile.close();
    
    return (EXIT_SUCCESS);
}