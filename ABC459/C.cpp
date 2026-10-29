#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    //Aはiに何個入ってるか、ijoはi個以上がいくつ
    //cntはi個入ってるとこが何個あるか
    int mn = 0;
    vector<int> A(N+2), ijo(Q+2), cnt(Q+2);
    ijo[0] = N;
    cnt[0] = N;
    while(Q--){
        int a;
        cin >> a;
        if(a == 1){
            int x;
            cin >> x;
            A[x-1]++;
            cnt[A[x-1]]++;
            cnt[A[x-1]-1]--;
            ijo[A[x-1]]++;
            if(cnt[mn] == 0) mn++;
        }
        if(a == 2){
            int y;
            cin >> y;
            int ans  = y + mn;
            if(ans >= ijo.size()) cout << 0 << endl;
            else cout << ijo[ans] << endl;
        }
    }
}