#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    vector<string> S(N);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i] >> S[i];
    }
    int ans = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == "keep"){
            ans += B[i] - A[i];
        }
    }
    cout << ans << endl;
}