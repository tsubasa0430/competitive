#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


int main() {
    int N;
    cin >> N;
    vector<long long> H(N), L(N);
    for(int i = 0; i < N; i++){
        cin >> H[i] >> L[i];
    }
    vector<long long> mx(N);
    mx[N - 1] = H[N - 1];
    for (int i = N - 2; i >= 0; --i) {
        mx[i] = max(H[i], mx[i + 1]);
    }
    int Q;
    cin >> Q;
    vector<long long> T(Q);
    for(int i = 0; i < Q; i++){
        long long T;
        cin >> T;
        auto it = upper_bound(L.begin(), L.end(), T);
        int idx = distance(L.begin(), it);
        cout << mx[idx] << endl;
    }
}