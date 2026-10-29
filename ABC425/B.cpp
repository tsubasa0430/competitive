#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i< N; i++){
        cin >> A[i];
    }
    vector<int> B(N,0), ans(N,0);
    for(int i = 0; i< N; i++){
        if(A[i]!= -1){
            B[A[i]-1]++;
        }
    }
    for(int i = 0; i< N; i++){
        if(B[i] >= 2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}