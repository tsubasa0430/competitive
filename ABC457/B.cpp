#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    int l;
    for(int i = 0; i < N; i++){
        cin >> l;
        A[i].resize(l);
        for(int j = 0; j < l; j++){
            cin >> A[i][j];
        }
    }
    int X,Y;
    cin >> X >> Y;
    cout << A[X-1][Y-1] << endl;
}