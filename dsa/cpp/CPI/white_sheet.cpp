/**
 * @file white_sheet.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem White Sheet - https://codeforces.com/contest/1216/problem/C
 * @version 0.1
 * @date 2025-11-10
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
        ll x1, y1, x2, y2;
    };

    Rect white;
    cin >> white.x1 >> white.y1 >> white.x2 >> white.y2;

    Rect black1, black2;

    cin >> black1.x1 >> black1.y1 >> black1.x2 >> black1.y2;
    cin >> black2.x1 >> black2.y1 >> black2.x2 >> black2.y2;

    // one black covers everything
    if ((black1.y2 >= white.y2 && black1.x2 >= white.x2 && black1.x1 <= white.x1 && black1.y1 <= white.y1) || (black2.y2 >= white.y2 && black2.x2 >= white.x2 && black2.x1 <= white.x1 && black2.y1 <= white.y1))
    {
        cout << "0.NO";
    }
    // one black covers a part, the other one covers remaining
    // horizontal fiting
    else if ((black1.x2 >= white.x2 && black1.x1 <= white.x1 && black1.y2 >= white.y2 && black1.y1 < white.y2) && (black2.y2 >= black1.y1 && black2.x2 >= white.x2 && black2.x1 <= white.x1 && black2.y1 <= white.y1))
    {

        cout << "1.NO";
    }
    else if ((black2.x2 >= white.x2 && black2.x1 <= white.x1 && black2.y2 >= white.y2 && black2.y1 < white.y2) && (black1.y2 >= black2.y1 && black1.x2 >= white.x2 && black1.x1 <= white.x1 && black1.y1 <= white.y1))
    {

        cout << "2.NO";
    }
    else if ((black1.y2 >= white.y2 && black1.y1 <= white.y1 && black1.x1 <= white.x1 && black1.x2 > white.x1) && (black2.x1 <= black1.x2 && black2.x2 >= white.x2 && black2.y2 >= white.y2 && black2.y1 <= white.y1))
    {

        cout << "3.NO";
    }
    else if (black2.y2 >= white.y2 && black2.y1 <= white.y1 && black2.x1 <= white.x1 && black2.x2 > white.x1 && black1.x1 <= black2.x2 && black1.x2 >= white.x2 && black1.y2 >= white.y2 && black1.y1 <= white.y1)
    {

        cout << "4.NO";
    }
    else
    {
        cout << "YES";
    }

    cout << endl;
    return (EXIT_SUCCESS);
}