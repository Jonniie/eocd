/**
 * @file line_trip.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem Line Trip (https://codeforces.com/problemset/problem/1901/A)
 * @version 0.1
 * @status - 
 * @date 2024-12-05
 *
 * @copyright Copyright (c) 2024
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

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;

	while(t--) {
		vector<ll> gases;

		ll n,x;

		cin >> n >> x;


		while(n--) {
			ll gas;
			cin >> gas;
			gases.push_back(gas);
		}

		ll temp = gases[0];

		for(int i = 0; i < gases.size() - 1; i++) {
			temp = max(temp, gases[i+1] - gases[i]);
		}

		if((x - gases[gases.size()-1]) * 2 > temp) {
			temp =  (x - gases[gases.size()-1]) * 2;
		}

		cout << temp  << (t == 0 ? "" : "\n");
	}

	
	return (EXIT_SUCCESS);
}