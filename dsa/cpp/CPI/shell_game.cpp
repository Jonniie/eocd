/**
 * @file shell_game.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Shell Game - https://usaco.org/index.php?page=viewproblem2&cpid=891
 * @version 0.1
 * @date 2025-11-11
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

    ll N;
    cin >> N;

    vector<int> arr{-1, 1, 2, 3};

    vector<int> res(4);
    for (int i = 0; i < N; i++)
    {
        int a, b, g;

        cin >> a >> b >> g;

        swap(arr[a], arr[b]);

        int el = arr[g];
        res[el]++;
    }

    cout << *max_element(res.begin(), res.end()) << endl;

    return (EXIT_SUCCESS);
}