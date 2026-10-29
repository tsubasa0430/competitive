#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A >= B && B >= C){
        cout << A*100 + B*10 + C << endl;
    }else if(A >=C && C >= B){
        cout << A*100 + C*10 + B << endl;
    }else if(B >= A && A >= C){
        cout << B*100 + A*10 + C << endl;
    }else if(B >= C && C >= A){
        cout << B*100 + C*10 + A << endl;
    }else if(C >= A && A >= B){
        cout << C*100 + A*10 + B << endl;
    }else{
        cout << C*100 + B*10 + A << endl;
    }
}