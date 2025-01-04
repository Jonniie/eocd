/**
 * @file cassidoo_23-12-24.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to Interview Problem of the Week (Cassidoo Newsletter)
 * @version 0.1
 * @status - solved
 * @date 2024-12-23
 *
 * @copyright Copyright (c) 2024
 *
 */


/** Problem Statement
 *
    This week's question:
    At the Magic Cookie Factory, cookies are baked in factorial quantities. A cookie is "perfectly round" if its size ends with a zero. Write a function to determine how many perfectly round cookies will be made when baking with n! ingredients.

    Examples:

    countPerfectlyRoundCookies(5)
    1 // 5! = 120, which has 1 trailing zero

    countPerfectlyRoundCookies(10)
    2 // 10! has 2 trailing zeros

    countPerfectlyRoundCookies(100)
    24
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

/**
 * @brief Factorial Function - Evaluate factorial
 * 
 * @return long long 
 */

ll factorial(ll n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

/**
 * @brief Counter Function - Count number of zeroes
 *
 * @return int
 */

int counter(ll n) {
    int count = 0;

    while(true) {
        if(n % 10 == 0) {
            count++;
            n = n/10;
        } else {
            return count;
        }     
    }
}

/**
 * @brief The main function
 *
 * @return int
 */

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll num1 = factorial(5);
    ll num2 = factorial(20);
    ll num3 = factorial(100);

    cout << counter(num1) << endl; // 1
    cout << counter(num2) << endl; // 4
    cout << counter(num3) << endl;
    
    return (EXIT_SUCCESS);
}