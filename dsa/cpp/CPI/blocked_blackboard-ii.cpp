/**
 * @file blocked_blackboard-ii.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Blocked Billboard II - https://usaco.org/index.php?page=viewproblem2&cpid=783
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

    struct Rect
    {
        int x1, y1, x2, y2;
    };

    int x, y;

    Rect cow_board, lawn_board;

    cin >> lawn_board.x1 >> lawn_board.y1 >> lawn_board.x2 >> lawn_board.y2;
    cin >> cow_board.x1 >> cow_board.y1 >> cow_board.x2 >> cow_board.y2;

    // the cowboard already covers the lawn board
    if (cow_board.x1 <= lawn_board.x1 && cow_board.x2 >= lawn_board.x2 && cow_board.y1 <= lawn_board.y1 && cow_board.y2 >= cow_board.y2)
    {
        cout << 0;
    }
    // bottom blocked
    else if (cow_board.y2 > lawn_board.y1 && cow_board.y1 <= lawn_board.y1 && cow_board.x1 <= lawn_board.x1 && cow_board.x2 >= lawn_board.x2)
    {
        cout << (lawn_board.y2 - cow_board.y2) * (lawn_board.x2 - lawn_board.x1);
    }
    // top blocked
    else if (cow_board.y1 < lawn_board.y2 && cow_board.y2 >= lawn_board.y2 && cow_board.x1 <= lawn_board.x1 && cow_board.x2 >= lawn_board.x2)
    {
        cout << (cow_board.y1 - lawn_board.y1) * (lawn_board.x2 - lawn_board.x1);
    }
    // right blocked
    else if (cow_board.x1 < lawn_board.x2 && cow_board.x2 >= lawn_board.x2 && cow_board.y1 <= lawn_board.y1 && cow_board.y2 >= lawn_board.y2)
    {
        cout << (cow_board.x1 - lawn_board.x1) * (lawn_board.y2 - lawn_board.y1);
    }
    // left blocked
    else if (cow_board.x2 > lawn_board.x1 && cow_board.x1 <= lawn_board.x1 && cow_board.y1 <= lawn_board.y1 && cow_board.y2 >= lawn_board.y2)
    {
        cout << (lawn_board.y2 - lawn_board.y1) * (lawn_board.x2 - cow_board.x2);
    }
    // no block or corner block
    else
    {
        cout << (lawn_board.x2 - lawn_board.x1) * (lawn_board.y2 - lawn_board.y1);
    }

    return (EXIT_SUCCESS);
}