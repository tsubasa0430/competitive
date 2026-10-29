#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> D(N-1), dis(N,0);
  for(int i = 0; i < N-1; i++){
    cin >> D[i];
    dis[i+1] = dis[i] + D[i];
  }
  for(int i = 0; i<N-1;i++){
    for(int j = i+1; j < N;j++){
      cout << dis[j] - dis[i] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
