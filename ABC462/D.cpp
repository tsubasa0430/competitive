#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

//imos法をもちいればTLE回避できそう
int main() {
    long long N;
    long long D;
    cin >> N >> D;
    vector<long long> imos(1000010, 0);
    for(int i = 0; i < N; i++){
        long long S, T;
        cin >> S >> T;
        if(S <= T - D){
            imos[S]++;
            if(T - D + 1 < imos.size()){
                imos[T - D + 1]--;
            }
        }
    }
    long long ans = 0, now = 0;
    for(int i = 0; i < imos.size(); i++){
        now  += imos[i];
        if(now >= 2){
            ans+= (now * (now - 1)) / 2;
        }
    }
    cout << ans << endl;


    
}