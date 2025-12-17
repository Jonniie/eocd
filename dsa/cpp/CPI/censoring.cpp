/**
 * @file censoring.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Censoring - https://usaco.org/index.php?page=viewproblem2&cpid=526
 * @version 0.1
 * @date 2025-11-12
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

    string S, T;

    cin >> S >> T;

    string res;

    for (int i = 0; i < S.size(); i++)
    {
        res.push_back(S[i]);
        if (res.size() >= T.size())
        {
            if (res.substr(res.size() - T.size(), T.size()) == T)
            {
                res.resize(res.size() - T.size());
            }
        }
    }

    cout << res << endl;

    return (EXIT_SUCCESS);
}