/**
 * @file fence_painting.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Fence Painting - https://usaco.org/index.php?page=viewproblem2&cpid=567
 * @version 0.1
 * @date 2025-11-07
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

    struct Cord
    {
        int x1, x2;
    };

    Cord A, B;

    cin >> A.x1 >> A.x2;
    cin >> B.x1 >> B.x2;
    // if one range swallows the other
    if (A.x2 > B.x2 && A.x1 < B.x1)
    {
        cout << A.x2 - A.x1;
    }
    else if (B.x2 > A.x2 && B.x1 < A.x1)
    {
        cout << B.x2 - B.x1;
    }
    // if they overlap
    else if (B.x2 > A.x1 && A.x2 > B.x1)
    {
        cout << max(A.x2, B.x2) - min(A.x1, B.x1);
    }
    else
    {
        cout << B.x2 - B.x1 + A.x2 - A.x1;
    }

    cout << endl;

    return (EXIT_SUCCESS);
}