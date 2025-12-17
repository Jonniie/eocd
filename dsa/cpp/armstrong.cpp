/**
 * @file armstrong.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem https://takeuforward.org/plus/dsa/problems/check-if-the-number-if-armstrong
 * @version 0.1
 * @status - solved
 * @date 2025-06-15
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isArmstrong(int n) {
    int temp_n = n;
    int sum = 0;
    while(temp_n > 0){
        int num = temp_n % 10;
        sum += pow(num, 3);
        temp_n /= 10;
    }

    return sum == n;
}

int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> hmap;

    int min_num;
    int max_freq;

    for(int num : nums) {
        hmap[num]++;
    }

    for(const pair<int, int>& el : hmap) {
        if(el.second >= max_freq) {
            max_freq = el.second;

            min_num = min(min_num, el.first);
        }
        max_freq = max(max_freq, el.second);
    }

    return min_num;
}

/**
 * @brief The main function
 *
 * @return int
 */

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {4, 4, 5, 5, 6};
    cout << mostFrequentElement(arr) << endl;
    
    
    return (EXIT_SUCCESS);
}