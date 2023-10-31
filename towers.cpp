#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define ll long long
//#define endl "\n"
#define testcase  int t=1;while(t--)
#define pb push_back


void hello(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

void fastread(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}


void solve(){
 int n;
 cin>>n;
vector<int>s;
for(int i=0;i<n;i++){
   int x;
   cin>>x;

   auto it=upper_bound(s.begin(),s.end(),x);

   if(it == s.end()) s.pb(x);
   else s[it-s.begin()]=x;
}
cout<<s.size()<<endl;
}

int32_t main(){
   fastread();
   hello();

  testcase{
   solve();
  }
return 0;
 }

