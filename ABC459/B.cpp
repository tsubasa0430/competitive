#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++)cin >> S[i];
    long long ans = 0;
    for(int i = 0; i < N; i++){
        if(S[i].at(0) >= 'a' && S[i].at(0) <= 'c'){
            ans *= 10;
            ans += 2;
        }
        if(S[i].at(0) >= 'd' && S[i].at(0) <= 'f'){
            ans *= 10;
            ans += 3;
        }
        if(S[i].at(0) >= 'g' && S[i].at(0) <= 'i'){
            ans *= 10;
            ans += 4;
        }
        if(S[i].at(0) >= 'j' && S[i].at(0) <= 'l'){
            ans *= 10;
            ans += 5;
        }
        if(S[i].at(0) >= 'm' && S[i].at(0) <= 'o'){
            ans *= 10;
            ans += 6;
        }
        if(S[i].at(0) >= 'p' && S[i].at(0) <= 's'){
            ans *= 10;
            ans += 7;
        }
        if(S[i].at(0) >= 't' && S[i].at(0) <= 'v'){
            ans *= 10;
            ans += 8;
        }
        if(S[i].at(0) >= 'w' && S[i].at(0) <= 'z'){
            ans *= 10;
            ans += 9;
        }
    }
    cout << ans << endl;
}
