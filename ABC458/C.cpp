#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    long long count = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i] == 'C'){
            count += min((int)(S.size() - i), i + 1);
        }
    }
    cout << count << endl;
}
