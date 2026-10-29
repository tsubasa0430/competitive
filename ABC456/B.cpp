#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    vector<int> A(6), B(6), C(6);
    for(int i = 0; i < 6; i++) cin >> A[i];
    for(int i = 0; i < 6; i++) cin >> B[i];
    for(int i = 0; i < 6; i++) cin >> C[i];

    double ans = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            for(int k = 0; k < 6; k++){
                if(A[i]* B[j]* C[k] == 120){
                    ans++;
                }
            }
        }
    }
    cout << ans/216.0 << endl;
}