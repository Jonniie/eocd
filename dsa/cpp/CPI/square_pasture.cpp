/**
 * @file square_pasture.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Square Pasture - https://usaco.org/index.php?page=viewproblem2&cpid=663
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

    struct Rect
    {
        int x1, y1, x2, y2;
    };

    Rect shape1, shape2;

    cin >> shape1.x1 >> shape1.y1 >> shape1.x2 >> shape1.y2;
    cin >> shape2.x1 >> shape2.y1 >> shape2.x2 >> shape2.y2;

    int x1 = min(shape1.x1, shape2.x1);
    int x2 = max(shape1.x2, shape2.x2);

    int y1 = min(shape1.y1, shape2.y1);
    int y2 = max(shape1.y2, shape2.y2);

    int length = max(x2 - x1, y2 - y1);

    cout << pow(length, 2) << endl;

    return (EXIT_SUCCESS);
}