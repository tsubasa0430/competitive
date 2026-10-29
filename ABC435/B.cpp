#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector<int> imos(N);
    imos[0] = A[0];
    for(int i = 1; i < N; i++){
        imos[i] = A[i] + imos[i-1];
    }
    int ans = 0;
    for(int i = 0; i < N-1; i++){
        for(int j = i + 1; j < N; j++){
          int sum =0;
            if(i == 0){
              sum = imos[j];
            }
            else{
              sum = imos[j] - imos[i-1];
            }
            for(int k = i; k <= j; k++){
                if(sum % A[k] == 0){
                    break;
                }
                else if(k == j){
                  ans++;
                }
            }
        }
    }
    cout << ans << endl;
}