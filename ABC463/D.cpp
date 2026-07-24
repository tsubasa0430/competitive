#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


int main() {
    int N, K;
    cin >> N >> K;
    vector<pair<long long, long long>> A(N);
    for(int i = 0; i < N; i++){
        long long L, R;
        cin >> L >> R;
        A[i] = {R, L};
    }
    sort(A.begin(), A.end());
    auto ch = [&](long long X){
        int count = 0;
        long long last = -2e18;
        for(const auto& a : A){
            long long R = a.first;
            long long L = a.second;
            if(L >= last + X){
                count++;
                last = R;
            }
        }
        return count;
    };
    if(ch(1) < K){
        cout << -1 << endl;
        return 0;
    }
    long long ok = 1;
    long long ng = 2e18;
    while(ng - ok > 1){
        long long mid = ok + (ng - ok) / 2;
        if(ch(mid) >= K){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }
    cout << ok << endl;
}