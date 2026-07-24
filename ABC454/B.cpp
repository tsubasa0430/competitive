#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> F(N), A(M);
    for(int i = 0; i < M; i++)A[i] = 0;
    bool ok1 = true;
    for(int i = 0; i < N; i++){
        cin >> F[i];
        A[F[i]-1]++;
        if(A[F[i]-1]>1){
            ok1 = false;
        }
    }
    if(ok1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    sort(A.begin(), A.end());
    if(A[0] != 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
