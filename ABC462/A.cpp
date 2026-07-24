#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    string ans = "";
    for(char c : S){
        if(isdigit(c)){
            ans += c;
        }
    }
    cout << ans << endl;
}
