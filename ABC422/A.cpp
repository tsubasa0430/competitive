#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    if(S[2] != '8'){
        S[2] += 1;
        cout << S << endl;

    }else{
        S[0] += 1;
        S[2] = '1';
        cout << S << endl;
    }
}