#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

   int N;
   cin >> N;

   vector<pair<pair<int, int>, int>> input(N);

   for(int i = 0; i < N; i++) {
    int start, end, bucket;

    cin >> start >> end >> bucket;
    pair<int, int> temp = {start,end};
    pair<pair<int, int>, int> temp1 = {temp, bucket};
    input[i] = temp1;
    }
   
   sort(input.begin(), input.end());

   for(auto el : input) {
    cout << el.first.first << " " << el.first.second << " " << el.second << endl;
   }

   set<int> idx;
   

   for(int i = 0; i < input.size(); i++) {
    auto el = input[i];
    int start1 = el.first.first;
    int end1 = el.first.second;
    int bkt1 = el.second;

    for(int j = i+1; j < input.size(); j++) {
        auto el1 = input[i];
        int start2 = el1.first.first;
        int end2 = el1.first.second;
        int bkt2 = el1.second;

        if(start2 < end1) {
            // exclusive

        }
    }
   }

    return 0;
}