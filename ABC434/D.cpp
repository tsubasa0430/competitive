#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(2002, vector<int>(2002,0));
    vector<int> U(N), D(N), L(N), R(N);
    for(int i = 0; i < N; i++){
        cin >> U[i] >> D[i] >> L[i] >> R[i];
        A[U[i]][L[i]]++;
        A[U[i]][R[i]+1]--;
        A[D[i]+1][L[i]]--;
        A[D[i]+1][R[i]+1]++;
    }
    for(int i = 1; i < 2001; i++){
        for(int j = 1; j < 2001; j++){
            A[i][j] += A[i][j-1];
        }
    }
    for(int j = 1; j < 2001; j++){
        for(int i = 1; i < 2001; i++){
            A[i][j] += A[i-1][j];
        }
    }
    int ans = 0;
    for(int i = 1; i < 2001; i++){
        for(int j = 1; j < 2001; j++){
            if(A[i][j] == 0){
                ans++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        int cnt = 0;
        for(int j = U[i]; j <= D[i]; j++){
            for(int k = L[i]; k <= R[i]; k++){
                if(A[j][k] == 1){
                    cnt++;
                }
            }
        }
        cout << ans + cnt << endl;
    }
}