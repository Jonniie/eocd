#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int res {0};
        unordered_map<int, int> mp;
        vector<int> temp;

        int a;
        cin >> a;
        for(int i = 0; i < a; i++) {
            int temp_num;
            cin >> temp_num;
            temp.push_back(temp_num);
        }

        for(int i = 0; i < temp.size(); i++) {
            mp[temp[i]]++;
            if(mp[temp[i]] == 2) {
                res++;
                mp[temp[i]] = 0;
            }
        }

        cout << res << endl;
    }


    return 0;
}