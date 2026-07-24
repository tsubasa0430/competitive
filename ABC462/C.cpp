#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

//xとyがどちらも基準の点より小さかったらNG
int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end());
    int ans = 0;
    int mn = 1e9;
    for(int i = 0; i < N; i++){
        if(A[i].second >= mn){
            continue;
        }
        ans++;
        mn = A[i].second;
    }
    cout << ans << endl;
}