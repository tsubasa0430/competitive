#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    string S;
    cin >> S;
    string T = S;
    int n = S.size();
    for (int i = 0; i < n; i++) {
        if (S[i] == '.') {
            bool can = false;
            if(i == 0)can = true;
            if (i > 0 && S[i-1] == '#') {
                can = true;
            }
            int j = i;
            while(j < n-1){
                j++;
                if(S[j] == '.') {
                    continue;
                }
                if(S[j] == '#') {
                    can = true;
                    break;
                }
                if(j == n-1){
                    can = false;
                }
            }
            if (i > 0 && T[i-1] == 'o')can = false;
            if (can) {
                T[i] = 'o';
            }
        }
    }
    cout << T << endl;
}
