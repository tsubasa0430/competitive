#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long N, K;
    cin >> N >> K;
    vector<vector<long long>> A(N);
    vector<long long> L(N), C(N);
    long long cnt = 0;
    for(int i = 0; i < N; i++){
        cin >> L[i];
        A[i].resize(L[i]);
        for(int j = 0; j < L[i]; j++){
            cin >> A[i][j];
        }
    }
    long long now;
    for(int i = 0; i < N; i++){
        cin >> C[i];
        cnt += C[i]*L[i];
        if(cnt >= K){
            cnt -= C[i]*L[i];
            now = i;
            break;
        }
    }
    cout << A[now][(K-cnt-1)%L[now]] << endl;
    
}