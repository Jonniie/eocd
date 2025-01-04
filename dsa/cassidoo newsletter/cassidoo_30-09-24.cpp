#include <bits/stdc++.h>
using namespace std;

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

int main() {
	string myString = "This is so, so silly!";

	vector<string> test1 = split(myString, " ");
	vector<string> test2 = split(myString, "");
	vector<string> test3 = split(myString, ",");
	vector<string> test4 = split(myString, " so, so");

	for(string word: test2) {
		cout << word << endl;
	}


	return 0;
}
