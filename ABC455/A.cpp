#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A != B && B == C){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
