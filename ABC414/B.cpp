#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<string> S(N);
    ll siz = 0;
    rep(i, 0, N) {
        cin >> S[i];
        cin >> A[i];
        siz += (ll)S[i].length() * A[i];
    }
    if(siz <= 100){
        ostringstream oss;
        rep(i, 0, N) {
            rep(j, 0, A[i]) {
                oss << S[i];
            }
        }
        cout << oss.str() << endl;
    }
    else {
        cout << "Too Long" << endl;
    }
}