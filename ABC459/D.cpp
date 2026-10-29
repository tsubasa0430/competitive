#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        int N = S.size();
        vector<int> cnt(26);
        vector<pair<int, char>> v;
        for(int i = 0; i < N; i++){
            cnt[S[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            v.push_back({cnt[i], (char)(i+'a')});
        }
        sort(v.begin(), v.end());
        if(N + 1 < v[25].first * 2){
            cout << "No"  << endl;
        }
        else{
            cout << "Yes" << endl;
            string ans(N, ' ');
            int idx = 0;
            sort(v.rbegin(), v.rend());
            for(auto x : v){
                for(int i = 0; i < x.first; i++){
                    ans[idx] = x.second;
                    idx += 2;
                    if(idx >= N) idx = 1;
                }
            }
            cout << ans << endl;
        }
    }
}