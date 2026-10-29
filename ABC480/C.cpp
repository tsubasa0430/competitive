#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, K, T;
    cin >> N >> K >> T;
    vector<ll> A(N);
    for(auto& a : A)cin >> a;
    sort(A.begin(), A.end());
    while(!A.empty() && A.back() > T)A.pop_back();

    if(A.empty()){
        cout << (T + K - 1) / K << endl;
        return 0;
    }
    ll ans = 0;
    if(A[0] > 0)ans += (A[0] + K - 1) / K;
    for(int i = 0; i + 1 < (int)A.size(); i++){
        ll diff = A[i+1] - A[i] - K;
        if(diff > 0)ans += (diff + K - 1) / K;
    }
    ll diff = T - A.back() - K;
    if(diff > 0)ans += (diff + K - 1) / K;
    cout << ans << endl;
}