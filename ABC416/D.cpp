#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll N, M;
        cin >> N >> M;
        multiset<ll> A;
        vector<ll> B(N);
        rep(i, 0, N) {
            ll a;
            cin >> a;
            A.insert(a % M); 
        }
        rep(i, 0, N) {
            cin >> B[i];
            B[i] %= M; 
        }
        sort(B.begin(), B.end());
        ll min = 0;
        rep(i, 0, N) {
            ll b = B[i];
            auto itr = A.lower_bound(M - b);
            if (itr != A.end()) {
                min += (*itr + b) % M;
                A.erase(itr);
            }
            else {
                itr = A.begin(); 
                min += (*itr + b) % M;
                A.erase(itr);
            }
        }
        cout << min << endl;
    }
}