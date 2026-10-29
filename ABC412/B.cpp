#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    bool ans = true;
    int N = S.size(), n = T.size();
    for(int i = 0; i < N; i++){
        if(i != 0 && S[i] <= 'Z'){
            for(int j = 0; j < n; j++){
                if(S[i-1] == T[j]){
                    break;
                }
                else if(j == n-1){
                    ans = false;
                    cout << "No" << endl;
                    break;
                }
            }
            if(!ans)break;
        }
    }
    if(ans)cout << "Yes" << endl;
}
