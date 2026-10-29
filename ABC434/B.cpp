#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, M, a, b;
    cin >> N >> M;
    vector<int> A(N+1), B(N+1);
    rep(i, 0, N){
        cin >> a >> b;
        A[a] += b;
        B[a]++;
    }
    rep(i, 1, M+1){
        cout << (double)A[i]/B[i] << endl;
    }
}