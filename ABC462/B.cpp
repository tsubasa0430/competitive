#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> rec(N + 1);
    for(int i = 1; i <= N; i++){
        int K;
        cin >> K;
        for(int j = 0; j < K; j++){
            int A;
            cin >> A;
            rec[A].push_back(i);
        }
    }
    for(int i = 1; i <= N; i++){
        cout << rec[i].size();
        for(int x : rec[i]){
            cout << " " << x;
        }
        cout << endl;
    }
}