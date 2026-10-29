#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int n;
    cin >> n;
    char S[n];
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(S[i] == 'o'){
            cnt++;
        }else{
            break;
        }
    }
    for(int i = cnt; i < n; i++){
        cout << S[i];
    }
    cout << endl;
}