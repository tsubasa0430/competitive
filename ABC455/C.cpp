#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int N, K;
    cin >> N >> K;
    map<long long, int> mp;
    for(int i = 0; i < N; i++){
        long long a;
        cin >> a;
        mp[a]++;
    }
    long long sum = 0;
    priority_queue<long long> pq;
    for(auto a : mp){
        sum += a.first * a.second;
        pq.push(a.first * a.second);
    }
    for(int i = 0; i < K; i++){
        sum -= pq.top();
        pq.pop();
        if(pq.empty())break;
    }
    cout << sum << endl;
}