//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<pair<int, string>> p;
  for(int i = 0; i < n; i++) {
    string x; int val; cin >> x >> val;
    p.push_back({-val, x});
  }
  sort(p.begin(), p.end());
  for(int i = 0; i < n; i++) {
    cout << p[i].second << " " << -p[i].first << "\n";
  }
  return 0;
}