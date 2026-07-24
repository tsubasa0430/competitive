#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int H, W;
    cin >> H >> W;
    rep(i, 0, H) {
        rep(j, 0, W) {
            int count = 0;
            if (i > 0) count++;
            if (i < H - 1) count++;
            if (j > 0) count++;
            if (j < W - 1) count++;
            if(j == W-1) cout << count;
            if(j != W-1) cout << count << " ";
        }
        cout << endl;
    }
}