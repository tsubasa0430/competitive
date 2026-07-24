#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
        
    }
    bool ok = true;
    for(int i = 0; i < N; i++){
        if(B[A[i] -1] != i + 1){
            ok = false;
            break;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}