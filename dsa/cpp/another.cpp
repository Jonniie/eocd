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

    ll T;
    cin >> T;

    while(T--) {
        ll res = 0;
        ll  M, N, K;
        cin >> M >> N >> K;
        
        vector<int> correctly;
        
        for(int i = 0; i < M; i++) {
            int temp;
            cin >> temp;
            correctly.push_back(temp);
        }
        
        sort(correctly.begin(), correctly.end());
        
        for(int i = 0; i < correctly.size(); i++) {
            if(K > 0) {
                res += N - correctly[i];
                K--;
            } else {
                res += correctly[i];
            }
        }
        
        
        cout << res;
    }
    
    return (EXIT_SUCCESS);
}