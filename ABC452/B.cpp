#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int H,W;
    cin >> H >> W;
    for(int i = 0; i < W; i++){
        cout << "#";
    }
    cout << endl;
    for(int i = 0; i < H-2; i++){
        cout << "#";
        for(int j = 0; j < W-2; j++){
            cout << ".";
        }
        cout << "#" << endl;
    }
    for(int i = 0; i < W; i++){
        cout << "#";
    }
    cout << endl;
}