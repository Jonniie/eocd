/**
 * @file insertion_sort.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * @version 0.1
 * @status - 
 * @date 2025-06-17
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
    vector<int> arr = {7, 4, 1, 5, 3};

    for(int i = 0; i < arr.size(); i++) {
        for(int j = arr.size() - 1; j > i; j--) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return (EXIT_SUCCESS);
}