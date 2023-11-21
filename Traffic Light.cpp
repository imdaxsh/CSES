#include<bits/stdc++.h>
#include<string.h>
using namespace std;

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

#define f first
#define sec second
#define sp " "
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ll long long
#define endl "\n"
#define testcase  int t;cin>>t;while(t--)
#define testcases  int t=1;while(t--)

//STL
#define pb push_back
#define eb emplace_back
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))

//types
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

//loops and others
#define loop(a,b) for(int i=a;i<b;i++)
#define rloop(a,b) for(int i=a;i>b;i--)
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

#define aa   pair<int,int>ans={0,mx};
#define bb   for(int i=1;i<=m;++i)
#define cc   int x;cin>>x;
#define dd     if(mp[x]>=mx)
#define ee      if(mx>ans.second)
#define ff  else if(mx>=ans.second)
#define gg  ans.first=min(ans.first,x);
#define hh   cout<<ans.first<<endl;
#define ii    ans.second=mx;
#define jj  cout<<a<<endl;
#define kk   if(max_ending < 0)
#define mm  if(max < max_ending)


  

void solve(){
     int x,n;
     cin>>x>>n;
set<int>postition;
multiset<int>length;

postition.insert(0);
postition.insert(x);
length.insert(x);


     for(int i=0;i<n;i++){
int no;
cin>>no;

postition.insert(no);
auto it=postition.find(no);
int previousValue=*prev(it);
int nextvalue= *next(it);

length.erase(length.find(nextvalue-previousValue ));
length.insert(no- previousValue);
length.insert(nextvalue-no);
cout<<*length.rbegin()<<" ";
     }
}



int main(){
   fastread();
   hello();

  testcases{
   solve();
  }
return 0;
 }



