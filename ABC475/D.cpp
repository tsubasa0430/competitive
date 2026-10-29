#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    int N;
    N = S.size();
    if(N == 1){
        cout << 2 << endl;
    }
    else if(N == 2 && S[0] == S[1]){
        cout << 11 << endl;
    }
    else if(N == 2 && S[0] != S[1]){
        cout << 13 << endl;
    }

}