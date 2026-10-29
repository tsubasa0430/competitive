#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, M, a, b, ans = 0;
    bool dou = false;
    cin >> N >> M;
    vector<int> A(M,-1), B(M,-1);
    vector<vector<int>> G(N);
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        if(a == b){
            ans++;
            continue;
        }
        a--;
        b--;
        for(int j = 0; j < i; j++){
            if((a == A[j] && b == B[j]) || (a == B[j] && b == A[j])){
                ans++;
                dou = true;
                break;
            }
        }
        if(dou){
            dou = false;
            continue;
        }
        A[i] = a;
        B[i] = b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bool con = true;
    for(int i = 0; i < N; i++){
        if(G[i].size() != 2){
            break;
        }
        else if(i == N-1){
            cout << "0" << endl;
            con = false;
        }
    }
//ここまでで多重辺なし、自己ループなしで入力をうけとった
//それらが来た場合でも辺削除をした。

/*枝分かれは削除しなければいけない
　なるべく長い鎖を残す
    すべてつなげて一つの大きな輪に*/
    if(con){
        for(int i = 0; i < N; i++){
            if(G[i].size() >= 3)ans += (G[i].size() - 2)*2;
            else if(G[i].size() == 0)ans++;
        }
    }
    ans++;
    cout << ans << endl;
}
