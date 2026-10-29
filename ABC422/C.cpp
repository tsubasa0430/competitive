#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int T;
    cin >> T;
    while(T--){
        int a, b, c, ans = 0;
        cin >> a >> b >> c;
        if(b >= a || b >= c){
            if(a <= c){
                cout << a << endl;
                continue;
            }
            else{
                cout << c << endl;
                continue;
            }
        }
        else{
            a -= b;
            c -= b;
            ans += b;
            if(a > c){
                int A = a-c;
                if(A >= c){
                    ans += c;
                    cout << ans << endl;
                    continue;
                }
                else{
                    a -= 2*A;
                    c -= A;
                    ans += A;
                    ans += 2*a/3;
                    cout << ans << endl;
                    continue;
                }

            } 
        }
    }
}