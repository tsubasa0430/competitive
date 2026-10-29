#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    if(Y*Z > X){
        cout << "No" << endl;
    }
    else if(Y*Z == X){
        cout << "Yes" << endl;
    }
    else{
        for(int i = 1; i <= 100; i++){
            if((Y+i)*Z == X+i){
                cout << "Yes" << endl;
                break;
            }
            if(i == 100){
                cout << "No" << endl;
            }
        }
    }
}