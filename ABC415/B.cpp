#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    string S;
    cin >> S;
    vector<int> p;
    rep(i, 0, S.size()) {
        if(S[i] == '#') p.push_back(i+1);
    }
    for(int i = 0; i < p.size(); i+=2) {
        cout << p[i] << "," << p[i+1] << endl;
    }
}
