/**
 * @file selection_sort.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem https://takeuforward.org/plus/dsa/problems/selection-sort
 * @version 0.1
 * @status - solved
 * @date 2025-06-16
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

// find smallest in a n - i window and swap with the i element

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> arr = {7, 4, 1, 5, 3};

    for(int i = 0; i < arr.size(); i++) {
        pair<int, int> small = {arr[i], i};

        for(int j = i+1; j < arr.size(); j++) {
            if(arr[j] < small.first) {
                small.first = arr[j];
                small.second = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[small.second];
        arr[small.second] = temp;
    }
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    return (EXIT_SUCCESS);
}
