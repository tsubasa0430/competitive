#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        int memo = -1;
        for(int j = 0; j < i; j++){
            if(A[i] < A[j]){
                memo = j+1;
            }
        }
        cout << memo << endl;
    }
}