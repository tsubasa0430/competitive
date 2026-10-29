#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q, a, cnt = 0;
  cin >> N >> Q;
  vector<int> col(N,0);
  for(int i = 0; i < Q; i++){
    cin >> a;
    if(col[a-1] == 0)col[a-1]=1;
    else col[a-1] = 0;
    
    if(col[a-1] == 1){
      if(a-2 >= 0 && a <= N-1){
        if(col[a-2] == 0 && col[a] == 0)cnt++;
        if(col[a-2] == 1 && col[a] ==1)cnt--;
      }
      else if(a-1 == 0){
        if(col[a] == 0)cnt++;
      }
      else if(a-1 == N-1){
        if(col[a-2] == 0)cnt++;
      }
    }
    else if(col[a-1] == 0){
      if(a-2 >= 0 && a <= N-1){
        if(col[a-2] == 0 && col[a] == 0)cnt--;
        if(col[a-2] == 1 && col[a] ==1)cnt++;
      }
      else if(a-1 == 0){
        if(col[a] == 0)cnt--;
      }
      else if(a-1 == N-1){
        if(col[a-2] == 0)cnt--;
      }
    }
      cout << cnt << endl;
  
  }
}
