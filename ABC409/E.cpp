#include <bits/stdc++.h>
using namespace std;

long long N;
vector<long long> x;
vector<vector<pair<long long, long long>>> G;
long long ans = 0;

long long dfs(long long v, long long parent){
    long long total = x[v];
    for(auto [to, cost] : G[v]){
        if(to == parent)continue;
        long long sub = dfs(to, v);
        ans += abs(sub) * cost;
        total += sub;
    }
    return total;
}

int main() {
    cin >> N;
    x.resize(N);
    G.resize(N);
    for(int i = 0; i < N; i++){
        cin >> x[i];
    }
    for (int i = 0; i < N - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }
    dfs(0, -1);
    cout << ans << endl;
}
