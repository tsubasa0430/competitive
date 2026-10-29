#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

vector<string> S;
int N, K;
vector<string> res;
void gen(int k, string cur) {
    if (k == K) {
        res.push_back(cur);
        return;
    }
    rep(i, 0, N) {
        gen(k + 1, cur + S[i]);
    }
}
int main() {
    int X;
    cin >> N >> K >> X;
    S.resize(N);
    rep(i, 0, N) {
        cin >> S[i];
    }
    gen(0, "");
    sort(res.begin(), res.end());
    cout << res[X - 1] << endl;
}