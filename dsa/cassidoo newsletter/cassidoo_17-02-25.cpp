#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int findShieldBreak(vector<int> vec, int num) {
	int sum = 0;
	for(size_t i = 0; i < vec.size(); i++) {
		if(sum+vec[i] <= num) {
			sum += vec[i];
		} else return i;
	}

	return -1;
}

int main() {
	vector<int> v1 = {10,20,30,40,50};
	vector<int> v2 = {1,2,3,4};
	vector<int> v3 = {50};

	int res1 = findShieldBreak(v1, 50);
	cout << res1 << endl;

	int res2 = findShieldBreak(v2, 20);
	cout << res2 << endl;

	int res3 = findShieldBreak(v3, 30);
	cout << res3 << endl;
}
