#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N = 60;
    vector<long long> f(N + 1, 0);
    
    for (int n = 1; n <= N; n++) {
        vector<vector<vector<long long>>> dp(n + 1,
            vector<vector<long long>>(n + 1, vector<long long>(n + 1, 0)));
        
        for (int i = 1; i <= n; i++) {
            dp[i][0][i] = 1;
        }
        
        for (int s = 1; s <= n; s++) {
            for (int prev = 0; prev <= s; prev++) {
                for (int last = 1; last <= s; last++) {
                    if (dp[s][prev][last] == 0) continue;
                    for (int next = 1; s + next <= n; next++) {
                        if (prev == 0) {
                            dp[s + next][last][next] = (dp[s + next][last][next] + dp[s][prev][last]) % MOD;
                        } else {
                            bool inc = (prev <= last);
                            if (inc || next <= last) {
                                dp[s + next][last][next] = (dp[s + next][last][next] + dp[s][prev][last]) % MOD;
                            }
                        }
                    }
                }
            }
        }
        
        for (int prev = 0; prev <= n; prev++) {
            for (int last = 1; last <= n; last++) {
                f[n] = (f[n] + dp[n][prev][last]) % MOD;
            }
        }
        
        if (n <= 60) cout << n << ": " << f[n] << endl;
    }
    return 0;
}
