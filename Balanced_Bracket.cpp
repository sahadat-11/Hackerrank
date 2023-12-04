//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<char, int> mp = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
bool isbalanced(string s) {
   stack<char> st;
   for(auto u : s) {
     if(mp[u] < 0) { // starting
        st.push(u);
     }
     else { // ending
       if(st.empty()) return false;
       else if(mp[u] + mp[st.top()] != 0) return false;
       st.pop();
     }
   }
   if(st.empty()) return true;
   return false;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      if(isbalanced(s)) cout << "YES\n";
      else cout << "NO\n";
   }
   // for(auto u : mp) {
   //    cout << u.first << " " << u.second << endl;
   // }
   return 0; 
}
