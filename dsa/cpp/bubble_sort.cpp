/**
 * @file bubble_sort.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem https://takeuforward.org/plus/dsa/problems/bubble-sort
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

//  bubble the largest number up to its place

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr = {5,4,3,2,1,1,2,4,5,3,1};

    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr.size() - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return (EXIT_SUCCESS);
}