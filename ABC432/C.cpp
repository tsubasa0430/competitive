#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long N, X, Y;
    cin >> N >> X >> Y;
    vector<long long> A(N);
    rep(i, 0, N) cin >> A[i];
    sort(A.begin(), A.end());
    long long diff = Y - X;
    long long ans = A[0];
    if((A[N-1] - A[0])*Y <= diff * A[N - 1]){
        for(int i = 1; i < N; i++){
            ans += A[i] - ((A[i] - A[0]) * Y)/ diff;
        }
        if(ans < -1)cout << "-1" << endl;
        else{
            cout << ans << endl;
        }
    }
    else{
        cout << "-1" << endl;
    }

}