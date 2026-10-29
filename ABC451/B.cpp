#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, M;
    cin >> N >> M;
    int A[M]={0}, B[M] = {0};
    int a, b;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        A[a-1]++;
        B[b-1]++;
    }
    for(int i = 0; i < M; i++){
        cout << B[i] - A[i] << endl;
    }
}