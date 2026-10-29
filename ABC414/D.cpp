#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    if(N <= M) {
        cout << "0" << endl;
    }
    else{
        vector<ll> X(N);
        for (int i = 0; i < N; ++i) {
            cin >> X[i];
        }
        sort(X.begin(), X.end());
        vector<ll> A(N-1);
        rep(i, 0, N-1) {
            A[i] = X[i+1] - X[i];
        }

        
    }
}
