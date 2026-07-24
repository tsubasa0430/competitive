#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long N, K, M;
    cin >> N >> K >> M;
    vector<vector<long long>> A(N+1);
    for(int i = 0; i < N; i++){
        long long c, v;
        cin >> c >> v;
        A[c].push_back(v);
    }
    vector<long long> tp, B;
    for(int i = 1; i < N+1; i++){
        if(!A[i].empty()){
            sort(A[i].rbegin(), A[i].rend());
            tp.push_back(A[i][0]);
            for(int j = 1; j < A[i].size(); j++){
                B.push_back(A[i][j]);
            }
        }
    }
    sort(tp.rbegin(), tp.rend());
    long long ans = 0;
    for(int i = 0; i < M; i++){
        ans += tp[i];
    }
    vector<long long> C;
    for(int i = M; i < tp.size(); i++){
        C.push_back(tp[i]);
    }
    for(auto v: B){
        C.push_back(v);
    }
    sort(C.rbegin(), C.rend());
    for(int i = 0; i < K - M; i++){
        ans += C[i];
    }
    cout << ans << endl;
}