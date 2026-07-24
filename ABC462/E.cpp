#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

//貪欲に均等に進み、最後につじつま合わせ
//極端な場合、ジグザグ(4*A)のほうがいいケースもあり
int main() {
    int T;
    cin >> T;
    while(T--){
        long long A, B, X, Y;
        cin >> A >> B >> X >> Y;
        X = abs(X);
        Y = abs(Y);
        long long cost1 = min(2 * A, 2 * B), ans = 0, cost2 = min(A + B, min(4 * A, 4 * B ));
        if((X + Y) % 2 == 0){
            ans = min(X, Y) * cost1 + (max(X, Y) - min(X, Y)) * cost2 / 2;
        }
        else{
            long long nx1 = abs(X - 1), ny1 = Y;
            long long rem1 = max(nx1, ny1) - min(nx1, ny1);
            long long cost11 = A + min(nx1, ny1) * cost1 + (rem1 / 2) * cost2;
            long long nx2 = X, ny2 = abs(Y - 1);
            long long rem2 = max(nx2, ny2) - min(nx2, ny2);
            long long cost22 = B + min(nx2, ny2) * cost1 + (rem2 / 2) * cost2;
            ans = min(cost11, cost22);
        }
        cout << ans << endl;
    }
}