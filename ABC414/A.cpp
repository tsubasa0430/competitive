#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    int N, L, R;
    cin >> N >> L >> R;
    int ans = 0;
    rep(i, 0, N) {
        int x , y;
        cin >> x >> y;
        if (x <= L && R <= y) {
            ans++;
        }
    }
    cout << ans << endl;
}
