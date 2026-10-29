#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;
        vector<bool> safe(1 << N, false);
        rep(i, 0, S.size()){
            if(S[i] == '0'){
                safe[i+1] = true;
            }
        }
        safe[0] = true;
        stack<int> st;
        st.push(0);
        vector<bool> visited(1 << N, false);
        visited[0] = true;
        while(!st.empty()) {
            int now = st.top();
            st.pop();
            rep (i, 0, N) {
                int next = now | (1 << i);
                if (!visited[next] && safe[next]) {
                    visited[next] = true;
                    st.push(next);
                }
            }
        }
        if(visited[(1 << N) - 1]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
}
