#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        cin >> S[i];
    }
    long long ans = 0;
    vector<vector<int>> sum(H+1, vector<int>(W+1, 0));
    rep(i, 0, H){
        rep(j, 0, W){
            if(S[i][j] == '1')sum[i+1][j+1] = sum[i][j+1] + sum[i+1][j] - sum[i][j] + 1;
            else sum[i+1][j+1] = sum[i][j+1] + sum[i+1][j] - sum[i][j];
        }
    }
    vector<int> cnt(H*W+1, 0);
    rep(h1, 1, H+1){
        rep(h2, h1, H+1){
            cnt[0] = 1;
            rep(w, 1, W+1){
                int a = sum[h2][w] - sum[h1-1][w];
                int t = a - K;
                if(t >= 0) ans += cnt[t];
                cnt[a]++;
            }
            rep(w, 1, W+1){
                int a = sum[h2][w] - sum[h1-1][w];
                cnt[a] = 0;
            }
            cnt[0] = 0;
        }
    }
    cout << ans << endl;
}