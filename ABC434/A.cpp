#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int W,B;
    cin >> W >> B;
    int i = 1;
    while(1000*W >= B*i){
        i++;
    }
    cout << i << endl;
}