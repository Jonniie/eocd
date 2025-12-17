/**
 * @file know_your_abc.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem
 * @version 0.1
 * @date 2025-11-09
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
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    multiset<int> nums;

    for (int i = 0; i < 7; i++)
    {
        int temp;
        cin >> temp;
        nums.insert(temp);
    }

    auto it = nums.begin();

    cout << *it << " " << *next(it, 1) << " " << *nums.rbegin() - *it - *next(it, 1);

    return (EXIT_SUCCESS);
}