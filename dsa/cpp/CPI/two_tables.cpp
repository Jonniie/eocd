/**
 * @file two_tables.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Two Tables
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
        double W, H;

        cin >> W >> H;

        double x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        double w, h;

        cin >> w >> h;
        // dont move
        if (W - x2 >= w || x1 >= w || H - y2 >= h || y1 >= h)
        {
            cout << fixed << setprecision(8) << 0;
        }
        else
        {
            double topOverlap, leftOverlap, rightOverlap, bottomOverlap;

            vector<double> inc;

            topOverlap = h - H + y2;
            if (y1 - topOverlap >= 0)
                inc.push_back(topOverlap);

            leftOverlap = w - x1;
            if (x2 + leftOverlap <= W)
                inc.push_back(leftOverlap);

            rightOverlap = x2 + w - W;
            if (x1 - rightOverlap >= 0)
                inc.push_back(rightOverlap);

            bottomOverlap = h - y1;
            if (y2 + bottomOverlap <= H)
                inc.push_back(bottomOverlap);

            if (inc.size() == 0)
                cout << -1;
            else
                cout << fixed << setprecision(8) << *min_element(inc.begin(), inc.end());
        }

        cout << endl;
    }
    return (EXIT_SUCCESS);
}