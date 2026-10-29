#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        cin >> S[i];
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            int cnt = 0;
            if(S[i][j] == '#'){
                if(i!=0)if(S[i-1][j] == '#') cnt++;
                if(i!=H-1)if(S[i+1][j] == '#') cnt++;
                if(j!=0)if(S[i][j-1] == '#') cnt++;
                if(j!=W-1)if(S[i][j+1] == '#') cnt++;
                if(cnt % 2 != 0 || cnt == 0){
                    cout << "No" << endl;
                    return 0;
            }
        }
    }
}
    cout << "Yes" << endl;
}