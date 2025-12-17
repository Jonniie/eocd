/**
 * @file blocked-blackboard.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief The solution to the problem Blocked Blackboard - https://usaco.org/index.php?page=viewproblem2&cpid=759
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

struct Rect
{
    int x1, y1, x2, y2;

    // function to find area
    int area()
    {
        return abs((x2 - x1) * (y2 - y1));
    }
};

// function to find intersection
int intersect(Rect Billboard, Rect Truck)
{
    int xOverlap = max(0, min(Truck.x2, Billboard.x2) - max(Truck.x1, Billboard.x1));
    int yOverlap = max(0, min(Truck.y2, Billboard.y2) - max(Truck.y1, Billboard.y1));
    return xOverlap * yOverlap;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Rect Truck1, Truck2, Billboard;

    cin >> Truck1.x1 >> Truck1.y1 >> Truck1.x2 >> Truck1.y2;
    cin >> Truck2.x1 >> Truck2.y1 >> Truck2.x2 >> Truck2.y2;
    cin >> Billboard.x1 >> Billboard.y1 >> Billboard.x2 >> Billboard.y2;

    cout << Truck1.area() + Truck2.area() - intersect(Billboard, Truck1) - intersect(Billboard, Truck2);

    return (EXIT_SUCCESS);
}
