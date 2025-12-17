/**
 * @file milk_measurement.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Milk Measurement - https://usaco.org/index.php?page=viewproblem2&cpid=761
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

    int N;
    cin >> N;

    vector<pair<int, pair<string, int>>> order;

    unordered_map<string, int> milk_count;

    for (int i = 0; i < N; i++)
    {
        int day, change;
        string name;

        cin >> day >> name >> change;

        pair<string, int> temp = make_pair(name, change);

        pair<int, pair<string, int>> el = make_pair(day, temp);

        order.push_back(el);
    }

    sort(order.begin(), order.end());

    vector<string> names = {"Bessie", "Elsie", "Mildred"};

    vector<string> display = names;
    int res = 0;

    for (auto el : names)
    {
        milk_count[el] = 7;
    }

    for (int i = 0; i < order.size(); i++)
    {
        auto ele = order[i];
        pair<string, int> temp = ele.second;
        milk_count[temp.first] = milk_count[temp.first] + temp.second;

        // find the maximum output
        int max_output = 0;

        for (auto el : milk_count)
        {
            max_output = max(max_output, el.second);
        }

        vector<string> new_display;

        for (auto el : milk_count)
        {
            if (el.second == max_output)
                new_display.push_back(el.first);
        }

        if (new_display != display)
            res++;
        display = new_display;
    }

    cout << res;

    return (EXIT_SUCCESS);
}