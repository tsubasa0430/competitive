#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)


int main() {
    double H, W;
    cin >> H >> W;
    if(W * 10000 >= 25 * H * H){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}