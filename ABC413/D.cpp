#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;


int main() {
    int T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        vector<pair<ll, ll>> A(N);
        ll c;
        rep(i, 0, N) {
            cin >> c;
            if(c < 0) {
                A[i] = {abs(c), -1};
            } else {
                A[i] = {abs(c), 1};
            }
        }
        sort(A.begin(), A.end());
    
        bool ok = false;
        rep(i, 1, N-1) {
            if(A[i].first * A[1].first != A[i+1].first * A[0].first) {
                ok = true;
                break;
            }
        }
        if(ok) {
            cout << "No" << endl;
            continue;
        }
        bool one = true;
        rep(i, 0, N-1){
            if(A[i].first != A[i+1].first){
                one = false;
            }
        }
        int minus = 0, plus = 0;
        bool oke = false;
        if(one){
            rep(i, 0, N){
                if(A[i].second == -1)minus++;
                else plus++;
            }
            if(abs(minus - plus) <= 1)oke = true;
        }
        if(oke) {
            cout << "Yes" << endl;
            continue;
        }
        bool same = true;
        bool alt = true;
        for (int i = 1; i < N; ++i) {
            if (A[i].second != A[0].second) {
                same = false;
                break;
            }
        }
        if (A[0].second == A[1].second && N > 1) { 
            alt= false;
        } else {
            for (int i = 1; i < N - 1; ++i) {

                if (A[i].second == A[i+1].second) {
                    alt = false;
                    break;
                }
            }
        }
        if (same|| alt) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
