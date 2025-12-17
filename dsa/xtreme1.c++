#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        string s;
        cin >> s;
        
        vector<queue<int>> q(6);
        vector<vector<int>> seqs;
        seqs.reserve(s.size() / 6);
        
        for (int i = 0; i < (int)s.size(); i++) {
            int c = s[i] - '0';
            
            if (c == 1) {
                if (!q[4].empty()) {
                    int id = q[4].front();
                    q[4].pop();
                    seqs[id].push_back(i + 1);
                    q[5].push(id);
                } else if (!q[1].empty()) {
                    int id = q[1].front();
                    q[1].pop();
                    seqs[id].push_back(i + 1);
                    q[2].push(id);
                } else {
                    int id = seqs.size();
                    seqs.push_back({i + 1});
                    q[1].push(id);
                }
            } else if (c == 2) {
                if (!q[2].empty()) {
                    int id = q[2].front();
                    q[2].pop();
                    seqs[id].push_back(i + 1);
                    q[3].push(id);
                } else if (!q[5].empty()) {
                    int id = q[5].front();
                    q[5].pop();
                    seqs[id].push_back(i + 1);
                }
            } else if (c == 0) {
                if (!q[3].empty()) {
                    int id = q[3].front();
                    q[3].pop();
                    seqs[id].push_back(i + 1);
                    q[4].push(id);
                }
            }
        }
        
        for (auto& seq : seqs) {
            if (seq.size() == 6) {
                for (int i = 0; i < 6; i++) {
                    if (i > 0) cout << " ";
                    cout << seq[i];
                }
                cout << "\n";
            }
        }
    }
    
    return 0;
}
