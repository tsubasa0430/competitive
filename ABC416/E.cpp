#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

const ll INF = 4e18; 

bool fw(vector<vector<ll>>& d, int N){
	rep(k, 0, N) {
        rep(i, 0, N) {
            rep(j, 0, N) {
                if(d[i][k] < INF && d[k][j] < INF) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
	return false;
}

int main() {
    int N;
    ll M;
    cin >> N >> M;
    vector<vector<ll>> d(N, vector<ll>(N, INF));
    rep(i, 0, N) {
        d[i][i] = 0;
    }

    rep(i, 0, M) { 
        ll u, v, c;
        cin >> u >> v >> c;
        u--; v--;
        d[u][v] = min(d[u][v], c);
        d[v][u] = min(d[v][u], c);
    }
    fw(d, N); 

    int K;
    ll T_cost;
    cin >> K >> T_cost;
    vector<bool> air(N, false);
    rep(i, 0, K) {
        ll node;
        cin >> node;
        air[node - 1] = true;
    }
    int Q;
    cin >> Q;
    while(Q--){
        int type;
        cin >> type;
        if(type == 1) {
            ll u, v, cost;
            cin >> u >> v >> cost;
            u--; v--;
            
            d[u][v] = min(d[u][v], cost);
            d[v][u] = min(d[v][u], cost);
            
            rep(i, 0, N) {
                rep(j, 0, N) {
                    if(d[i][u] < INF && d[v][j] < INF) {
                        d[i][j] = min(d[i][j], d[i][u] + d[u][v] + d[v][j]);
                    }
                    if(d[i][v] < INF && d[u][j] < INF) {
                        d[i][j] = min(d[i][j], d[i][v] + d[v][u] + d[u][j]);
                    }
                }
            }
        } else if(type == 2) {
            ll node;
            cin >> node;
            air[node - 1] = true;
        } 
        else {
            ll total_sum = 0;
            vector<ll> min_to_ap(N, INF);
            vector<ll> min_from_ap(N, INF);

            rep(i, 0, N) {
                rep(ap_node, 0, N) { 
                    if(air[ap_node] && d[i][ap_node] < INF) {
                        min_to_ap[i] = min(min_to_ap[i], d[i][ap_node]);
                    }
                }
            }

            rep(j, 0, N) {
                rep(ap_node, 0, N) { 
                    if(air[ap_node] && d[ap_node][j] < INF) {
                        min_from_ap[j] = min(min_from_ap[j], d[ap_node][j]);
                    }
                }
            }

            rep(i, 0, N) {
                rep(j, 0, N) {
                    ll current_f = d[i][j]; 
                    if(min_to_ap[i] < INF && min_from_ap[j] < INF) {
                        current_f = min(current_f, min_to_ap[i] + T_cost + min_from_ap[j]);
                    }
                    total_sum += (current_f == INF ? 0 : current_f);
                }
            }
            cout << total_sum << endl;
        }
    }
}