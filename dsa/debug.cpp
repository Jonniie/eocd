#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M = 2;
    vector<vector<vector<int>>> dp(M + 1, vector<vector<int>>(M + 1, vector<int>(2, 0)));
    
    for (int i = 1; i <= M; i++) {
        dp[i][i][0] = 1;
    }
    
    for (int sum = 1; sum < M; sum++) {
        for (int last = 1; last <= sum; last++) {
            if (dp[sum][last][0] > 0) {
                for (int next = last; sum + next <= M; next++) {
                    dp[sum + next][next][0] += dp[sum][last][0];
                }
                for (int next = 1; next <= last && sum + next <= M; next++) {
                    dp[sum + next][next][1] += dp[sum][last][0];
                }
            }
            if (dp[sum][last][1] > 0) {
                for (int next = 1; next <= last && sum + next <= M; next++) {
                    dp[sum + next][next][1] += dp[sum][last][1];
                }
            }
        }
    }
    
    cout << "DP table for N=2:\n";
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "dp[" << i << "][" << j << "][0] = " << dp[i][j][0] << ", ";
            cout << "dp[" << i << "][" << j << "][1] = " << dp[i][j][1] << endl;
        }
    }
    return 0;
}
