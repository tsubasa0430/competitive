#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<long long> cnt;
    long long count = 1;
    for(int i = 0; i < N-1; i++){
        if(S[i] != S[i+1]){
            count++;
        }else{
            cnt.push_back(count);
            count = 1;
        }
    }
    cnt.push_back(count);
    long long ans = 0;
    for(int i = 0; i < cnt.size(); i++){
        ans += (cnt[i]+1)*cnt[i]/2;
        ans %= 998244353;
    }
    cout << ans << endl;
}