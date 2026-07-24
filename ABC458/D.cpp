#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    long long X;
    cin >> X;
    long long Q;
    cin >> Q;
    priority_queue<long long, vector<long long>, greater<long long>> right;
    priority_queue<long long> left;
    left.push(X);

    while(Q--){
        long long a, b;
        cin >> a >> b;
        left.push(a);
        left.push(b);
        right.push(left.top());
        left.pop();
        right.push(left.top());
        left.pop();
        if(right.size() > left.size()){
            left.push(right.top());
            right.pop();
        }
        cout << left.top() << endl;
    }
}
