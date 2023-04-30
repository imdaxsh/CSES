#include<bits/stdc++.h>

using namespace std;
#define int long long
const int mxN = 2e5+5;
int dp[mxN];
signed main(){
  int n;
  cin >> n;
  int k;
  vector<int> v(n+1);
for (int i = 1; i <= n; i++) 
    cin >> v[i];
sort(v.begin(), v.end());
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (dp[i-1] < v[i]) return cout<<dp[i-1], 0;
        dp[i] = dp[i-1] + v[i];
    }
    cout<<dp[n];
}