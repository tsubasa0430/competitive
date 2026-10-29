#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b, ans = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;
        if(a<b)ans++;
    }
    cout << ans << endl;
}
