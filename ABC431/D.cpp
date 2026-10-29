#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long N;
    cin >> N;
    long long wei = 0, happy = 0;
    vector<long long> W(N+10), H(N+10), B(N+10);
    for(int i = 0; i < N; i++){
        cin >> W[i] >> H[i] >> B[i];
        wei += W[i];
        happy += B[i];
    }
    int lim = wei / 2;
    vector<vector<long long>> dp(N + 10, vector<long long>(lim + 10));
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= lim; j++){
            dp[i][j] = -1e9;
        }
    }
    dp[0][0] = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= lim; j++){
            if(j >= W[i]){
                dp[i+1][j] = max(dp[i][j], dp[i][j - W[i]] + (H[i] - B[i]));
            }
            else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }
    long long mx = 0;
    for(int i = 0; i <= lim; i++){
        mx = max(mx, dp[N][i]);
    }
    cout << mx + happy << endl;
}