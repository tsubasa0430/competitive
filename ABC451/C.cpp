#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
    int Q;
    cin >> Q;
    priority_queue<int> A;
    while(Q--){
        long long a, h;
        cin >> a >> h;
        if(a == 1){
            A.push((-1) * h);
        }else{
            if(A.empty()){
                cout << "0" << endl;
                continue;
            }
            while(!A.empty() && A.top() >= (-1) * h){
                A.pop();
            }
        }
        cout << A.size() << endl;
    } 
}