#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    string S;
    cin >> S;
    int size = S.size();
    vector<int> A(size-1);
    for(int i = 0; i < size-1; i++){
        A[i] = S[i+1] - S[i];
    }
    int cnt = 0, ans = 0;
    for(int i = 0; i < size-1; i++){
        
        if(A[i] == 1){
            ans++;
            for(int j = 1; j <= cnt; j++){
                if(i + j >= size - 1) break; 
                if(A[i+j] == 0){
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        if(A[i] == 0){
            cnt++;
        }
        else{
            cnt = 0;
        }
    }
    cout << ans << endl;
}