/**
 * @file buy_the_string.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Buy the String - https://codeforces.com/contest/1440/problem/A
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

    ll t;
    cin >> t;

    while (t--)
    {
        int n, c0, c1, h;

        cin >> n >> c0 >> c1 >> h;

        string binary_str;
        cin >> binary_str;
        int res = 0;

        for (int i = 0; i < binary_str.size(); i++)
        {
            int num = binary_str.at(i) - '0';

            if (num == 0)
            {
                res += min(c0, c1 + h);
            }
            else
            {
                res += min(c1, c0 + h);
            }
        }

        cout << res << endl;
    }

    return (EXIT_SUCCESS);
}