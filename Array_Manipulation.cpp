//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 7;
ll pre_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, q; cin >> n >> q;
   while(q--) {
      int l, r, x; cin >> l >> r >> x;
      for(int i = l; i <= r; i++) {
         pre_sum[i] += x;
      }
   }
   // for(int i = 1; i <= n; i++) {
   //    cout << pre_sum[i] << " ";
   // }
   ll mx = *max_element(pre_sum + 1, pre_sum + n + 1);
   cout << mx << "\n";

   return 0;
}
// O(n * q);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 7;
int arr[N];
ll pre_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, q; cin >> n >> q;
   while(q--) {
      int l, r, x; cin >> l >> r >> x;
      arr[l] += x;
      arr[r + 1] -= x;
   }
   for(int i = 1; i <= n; i++) {
      pre_sum[i] = pre_sum[i - 1] + arr[i];
   }
   ll mx = *max_element(pre_sum + 1, pre_sum + n + 1);
   cout << mx << "\n";

   return 0;
}
// O(q);
// https://prnt.sc/W8v5SOYXcJph