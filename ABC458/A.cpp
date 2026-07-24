#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    string S;
    cin >> S >> N;
    cout << S.substr(N, S.size() - 2 * N) << endl;
}
