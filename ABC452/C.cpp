#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N),B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    int M;
    cin >> M;
    vector<string> S(M);
    //長さ、文字目、どのアルファベットかa=0
    bool memo[12][12][26] = {false};
    for(int i = 0; i < M; i++){
        cin >> S[i];
        for(int j = 0; j < S[i].size(); j++){
            memo[S[i].size()][j][S[i][j] - 'a'] = true;
        }
    }

    for(int i = 0; i < M; i++){
        if(S[i].size() != N){
            cout << "No" << endl;
            continue;
        }
        bool ok = true;
        for(int j = 0; j < N; j++){
            if(!memo[A[j]][B[j]-1][S[i][j]-'a']){
                ok = false;
                break;
            }}
            if(ok){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            
        }
    }
