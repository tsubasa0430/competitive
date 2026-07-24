#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

//隣り合わない条件はもっとも多く出現する文字の数Mが、全体の長さN, M <= (N+1)/2
//頻度の高い文字から順番に配置すれば隣り合わなくさせることができる？？？

int main() {
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        int N = S.size();
        vector<int> cnt(26, 0);
        for(int i = 0; i < N; i++){
            cnt[S[i]-'a']++;
        }
        vector<pair<int, char>> cnt2;
        for(int i = 0; i < 26; i++){
            cnt2.push_back({cnt[i], (char)('a' + i)});
        }
        sort(cnt2.rbegin(), cnt2.rend());
        if(cnt2[0].first > (N + 1) / 2){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
            int idx = 0;
            string ans(N, ' ');
            for(auto a: cnt2){
                int num = a.first;
                char c = a.second;
                while(num > 0){
                    ans[idx] = c;
                    idx += 2;
                    if(idx >= N){
                        idx = 1;
                    }
                    num--;
                }
            }
            cout << ans << endl;
        }
    }
}
