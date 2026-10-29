#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for(int i = 1; i <= N; i++){
        ans += i;
    }
    cout << ans << endl;
}