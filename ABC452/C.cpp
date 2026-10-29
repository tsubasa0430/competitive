#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, 0, N) {
        cin >> A[i] >> B[i];
    }
    int M;
    cin >> M;
    bool memo[12][12][26] = {false};
    vector<string> S(M);
    rep(i, 0, M) {
        cin >> S[i];
        for(int pos = 0; pos < S[i].size(); pos++) {
            memo[S[i].size()][pos][S[i][pos]-'a'] = true;
        }
    }

    for(int i = 0; i < M; i++){
        if(S[i].size() != N){
            cout << "No" << endl;
            continue;
        }
        for(int j = 0; j < N; j++){
            if(memo[A[j]][B[j]][S[i][j]-'a']){
                cout << "Yes" << endl;
                break;
        }
    }
}
    
}