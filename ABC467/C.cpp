#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(N-1);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N-1; i++){
        cin >> B[i];
    }
    int mn = N + 1;
    for(int i = 0; i < 2; i++){
        int cost = 0;
        int val = i;
        if(A[0] != val){
            cost++;
        }
        for(int j = 0; j < N-1; j++){
            val = val ^ B[j];
            if(A[j+1] != val){
                cost++;
            }
        }
        mn = min(mn, cost);
    }
    cout << mn << endl;
}