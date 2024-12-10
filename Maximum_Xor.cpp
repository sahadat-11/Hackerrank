//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int l, r; cin >> l >> r;
  int ans = 0;
  for(int i = l; i <= r; i++) {
  	for(int j = i; j <= r; j++) {
  	  ans = max(ans, (i ^ j));
  	}
  }
  cout << ans << "\n";
  return 0;
}

// O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int l, r; cin >> l >> r;
  int XOR = l ^ r;
  int xx = log2(XOR) + 1;
  cout << (1ll << xx) - 1;
  return 0;
}