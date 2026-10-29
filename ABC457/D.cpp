#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long N, K;
    cin >> N >> K;
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    for(int i = 0; i < N; i++){
        long long a;
        cin >> a;
        pq.push({a, i+1});
    }
    for(int i = 0; i < K; i++){
        pq.push({pq.top().first + pq.top().second, pq.top().second});
        pq.pop();
    }
    cout << pq.top().first << endl;
}