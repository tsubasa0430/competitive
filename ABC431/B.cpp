#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int X, N;
    cin >> X >> N;
    vector<int> W(N), A(N);
    rep(i, 0, N){
        cin >> W[i];
    }
    int Q;
    cin >> Q;
    int p;
    int ans = X;
    rep(i, 0, Q){
        cin >> p;
        A[p-1]++;
        if(A[p-1] % 2 == 1){
            ans += W[p-1];
        }
        else{
            ans -= W[p-1];
        }
        cout << ans << endl;
    }

}