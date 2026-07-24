#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, Q, mn = 0;
    cin >> N >> Q;
    vector<int> A(N), kaisu(Q+2, 0), ijo(Q+2, 0);
    kaisu[0] = N;
    ijo[0] = N;
    for(int i = 0; i < Q; i++){
        int a;
        cin >> a;
        if(a == 1){
            int x;
            cin >> x;
            A[x-1]++;
            kaisu[A[x-1]]++;
            kaisu[A[x-1]-1]--;
            ijo[A[x-1]]++;
            if(kaisu[mn] == 0){
                mn++;
            }
        }else if(a == 2){
            int y;
            cin >> y;
            int target = y + mn;
            if(target > Q){
                cout << 0 << endl;
            }else{
                cout << ijo[target] << endl;
            }
        }
    }
}