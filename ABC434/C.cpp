#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int T;
    cin >> T;
    while(T--){
        int N, H;
        cin >> N >> H;
        int now = H;
        vector<int> t(N), l(N), u(N);
        rep(i, 0, N){
            cin >> t[i] >> l[i] >> u[i];
        }
        int mn = H - t[0], mx = H + t[0];
        for(int i = 0; i < N; i++){
            if(mn > u[i] || mx < l[i]){
                cout << "No" << endl;
                break;
            }
            else{
                if(i != N-1){
                mn = max(mn - (t[i+1] - t[i]), max(l[i] - (t[i+1] - t[i]), 1));
                mx = min(mx + (t[i+1] - t[i]), u[i] + (t[i+1] - t[i]));
                }
            }
            if(i == N-1){
                cout << "Yes" << endl;
            }
        }
    }
}