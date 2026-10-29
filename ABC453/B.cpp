#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int T, X;
    cin >> T >> X;
    int S[T+1];
    for(int i = 0; i <= T; i++){
        cin >> S[i];
    }
    int now = S[0];
    cout << "0 " << now << endl;
    for(int i = 1; i <= T; i++){
        if(S[i] - now >= X || now - S[i] >= X){
            now = S[i];
            cout << i << " " << now << endl;
        }
    }

}