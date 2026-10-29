#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    int sz = S.size();
    if(sz == 5 || sz == 10){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}