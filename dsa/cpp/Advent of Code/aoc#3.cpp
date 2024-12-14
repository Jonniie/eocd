/**
 * @file aoc#3.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * @version 0.1
 * @status - 
 * @date 2024-12-03
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

vector<string> split(string str, string chr){
	vector<string> result;
	string temp = "";
	int chr_length = chr.size();

	if (chr == "") {
		for (int i = 0; i < str.size(); i++) {
			string el = str.substr(i, 1);
			result.push_back(el);
		}
	} else {
		for (int i = 0; i < str.size(); i++) {
			string ch = str.substr(i, chr_length);
			if (ch == chr) {
				result.push_back(temp);
				i += chr_length - 1;
				temp = "";
			} else {
				temp += str.at(i);
			}
		}
		
		if (temp != "") {
			result.push_back(temp);
		}
	}

	return result;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ifstream inputFile("aoc#1.txt");

    if(!inputFile) {
        cerr << "Unable to open file" << endl;
        return 1;
    }

    vector<int> list1;
    vector<int> list2;
    ll sum = 0;

    string str;

    vector<string> str_arr = split(str, "mul(");

    while(inputFile >> str) {
        for(int i = 0; i < str_arr.size(); i++) {
            string = str_arr[i];
            if()
        }
    }
    
    
    return (EXIT_SUCCESS);
}