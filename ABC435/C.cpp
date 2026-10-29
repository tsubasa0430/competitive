#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int limit = 0 + A[0]; 
    int ans = 0;
    for(int i = 0; i < N; i++){
        if (i < limit) {
            ans++;
            limit = max(limit, i + A[i]);
        }
        else{
            break;
        }
    }
    cout << ans << endl;
}