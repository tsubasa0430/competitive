#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++);

/*二点を通る円は垂直二等分線上、2つの直線が平行じゃなきゃ存在、ただし直線一致の場合あり*/

int main() {
    int T;
    cin >> T;
    while(T--){
        long long Px, Py, Qx, Qy,  Rx, Ry, Sx, Sy;
        cin >> Px >> Py >> Qx >> Qy >> Rx >> Ry >> Sx >> Sy;
        long long v1x = Qx - Px;
        long long v1y = Qy - Py;
        long long v2x = Sx - Rx;
        long long v2y = Sy - Ry;
        long long cross = v1x * v2y - v1y * v2x;
        if(cross != 0){
            cout << "Yes" << endl;
        }else{
            long long x = Rx + Sx - Px - Qx;
            long long y = Ry + Sy - Py - Qy;
            long long dot = x * v1x + y * v1y;
            if(dot == 0){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
}