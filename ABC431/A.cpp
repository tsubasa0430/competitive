#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int H, B;
    cin >> H >> B;
    if(B - H >= 0){
        cout << "0" << endl;
    }
    else{
        cout << H - B << endl;
    }
}