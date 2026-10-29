#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long N, S, T;
    cin >> N >> S >> T;
    S--;
    vector<long long> A(N-1);
    for(int i = 0 ; i < N-1; i++){
        cin >> A[i];
    }
    vector<long long> ruiseki(N,0);
    for(int i = 0; i < N-1; i++){
        ruiseki[i+1] = ruiseki[i] + A[i];
    }
    long long ans = 1;
    for(long long l = 0; l < N; l++){
        for(long long r = l; r < N; r++){
            if(l >= r || S < l || S > r) continue;
            long long L = ruiseki[S] - ruiseki[l];
            long long R = ruiseki[r] - ruiseki[S];

            long long kouho = min(2 * L + R, L + 2 * R);
            if(kouho <= T){
                ans = max(ans, r - l + 1);
            }
        }
    }
    cout << ans << endl;
}