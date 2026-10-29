#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string X;
    cin >> X;
    int N = X.size();
    vector<int> A(N);
    rep(i, 0, N) A[i] = (int)X[i]-48;
    sort(A.begin(), A.end());
    vector<int> B(N);
    int memo;
    rep(i, 0, N) {
        if(A[i] != 0){
            memo = i;
            break;
        }
    }
    B[0] = A[memo];
    for(int i = 0; i < memo; i++){
        B[i+1] = A[i];
    }
    for(int i = memo+1; i < N; i++){
        B[i] = A[i];
    }
    int ans;
    rep(i, 0, N){
        ans += B[i] * pow(10, N - i - 1);
    }
    cout << ans << endl;
}