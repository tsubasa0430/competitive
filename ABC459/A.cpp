#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int X;
    cin >> X;
    string S = "HelloWorld";
    S.erase(X-1, 1);
    cout << S << endl;
}
