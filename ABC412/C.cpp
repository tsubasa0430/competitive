#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        int cnt = 1;
        vector<int> S(N);
        for(int i = 0; i < N; i++)cin >> S[i];
        sort(S.begin()+1,S.end()-1);
        int now = S[0], itr = 0;
        for(int i = 1; i <= N; i++){
            if(now*2 >= S[N-1]){
                cnt++;
                cout << cnt << endl;
                break;
            }
            else if(i == N){
                cout << "-1" << endl;
                break;
            }
            else if(now*2 < S[i] && i - itr <= 1){
                cout << "-1" << endl;
                break;
            }
            else if(now*2 < S[i] && 2*now >= S[i-1]){
                now = S[i-1];
                itr = i-1;
                cnt++;
            }
        }
    }
}
