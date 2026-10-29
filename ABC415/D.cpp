#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<tuple<ll, ll, ll>> A(M);
    ll a,b;
    rep(i, 0, M) {
        cin >> a >> b;
        A[i] = make_tuple(a-b, a, b);
    }
    sort(A.begin(), A.end());
    ll drink = N;
    ll empty = N;
    while(true){
        bool up = false;
        rep(i, 0, M){
            ll a = get<1>(A[i]);
            if(empty < a)continue;
            ll b = get<2>(A[i]);
            ll cnt = (empty - a)/ (a - b) + 1;
            drink += cnt * b;
            empty -= cnt * a;
            empty += cnt * b;
            up = true;
        }
        if(!up) break;
    }
    cout << drink << endl;
}
