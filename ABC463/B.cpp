#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


int main() {
    int N;
    char X;
    cin >> N >> X;
    for (int i = 0; i < N; ++i){
        string S;
        cin >> S;
        if(S[X - 'A'] == 'o'){
            cout << "Yes" << endl;
            return 0;
        }
        else if(i == N - 1){
            cout << "No" << endl;
        }
    }
}