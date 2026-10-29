#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    double L[N];
    for(int i = 0; i < N; i++){
        cin >> L[i];
    }
    int ans = 0;
    for(int bit = 0; bit < (1 << N); bit++){
        double sum = 0.5;
        int cnt = 0;
        for(int i = 0; i < N; i++){
            if(bit & (1 << i)){
                if(sum < 0 && sum + L[i] >= 0){
                    cnt++;
                }
                sum += L[i];
            }
            else{
                if(sum > 0 && sum - L[i] <= 0){
                    cnt++;
                }
                sum -= L[i];
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}