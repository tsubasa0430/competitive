#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool kaibun(const string& s) {
  int n = s.size();
  for (int i = 0; i < n / 2; ++i) {
    if (s[i] != s[n - 1 - i]) return false;
  }
  return true;
}

string ten(ll n, int base) {
  string res;
  while (n > 0) {
    res += char('0' + n % base);
    n /= base;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  int A;
  ll N;
  cin >> A >> N;
  ll sum = 0;

  for (ll i = 1; ; ++i) {
    string s = to_string(i);
    string rev = s;
    reverse(rev.begin(), rev.end());
    string str = s + rev.substr(1);
    ll val = stoll(str);
    if (val > N) break;
    if (kaibun(ten(val, A))) {
      sum += val;
    }
  }
  for (ll i = 1; ; ++i) {
    string s = to_string(i);
    string rev = s;
    reverse(rev.begin(), rev.end());
    string str = s + rev;
    ll val = stoll(str);
    if (val > N) break;
    if (kaibun(ten(val, A))) {
      sum += val;
    }
  }
  cout << sum << endl;
}
