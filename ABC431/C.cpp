#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> H(N), B(M);
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    for(int i = 0; i < M; i++){
        cin >> B[i];
    }
    sort(H.begin(), H.end());
    sort(B.rbegin(), B.rend());
    vector<int> HK(K), BK(K);
    for(int i = 0; i < K; i++){
        HK[i] = H[i];
        BK[K-i-1] = B[i];
    }
    for(int i = 0; i < K; i++){
        if(HK[i] > BK[i]){
            cout << "No" << endl;
            break;
        }
        if(i == K-1){
            cout << "Yes" << endl;
        }
    }
}