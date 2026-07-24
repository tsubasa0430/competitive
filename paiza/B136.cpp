#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, H, W;
    cin >> N >> H >> W;
    int sy, sx;
    cin >> sy >> sx;
    string s;
    cin >> s;
    vector<vector<int>> grid(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid[i][j];
        }
    }
    vector<int> ans(N);
    //grid[sy-1][sx-1]  がスタート地点
    int y = sy-1, x = sx-1;
    for(int i = 0; i < N; i++){
        if(s[i] == 'F'){
            y--;
            ans[i] = grid[y][x];
        }
        else if(s[i] == 'B'){
            y++;
            ans[i] = grid[y][x];
        }
        else if(s[i] == 'L'){
            x--;
            ans[i] = grid[y][x];
        }
        else if(s[i] == 'R'){
            x++;
            ans[i] = grid[y][x];
        }
    }
    for(int i = 0; i < N; i++){
        cout << ans[i] << endl;
    }
}
