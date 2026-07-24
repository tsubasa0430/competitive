#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        int N = S.size();
        vector<int> cnt(26, 0);
        for(int i = 0; i < N; i++){
            cnt[S.at(i) - 'a']++;
        }
        vector<pair<int, char>> v;
        for(int i = 0; i < 26; i++){
            v.push_back({cnt[i], (char)(i + 'a')});
        }
        sort(v.begin(), v.end());
        
    }
}