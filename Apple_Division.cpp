#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <ext/pb_ds/tree_policy.hpp>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <deque>
#include <iterator>
#include <tuple>
#include <iomanip>
#include <valarray>
#include <limits>
#include <sstream>
#include <fstream>
#include <cassert>
#include <functional>
#include <numeric>
using namespace std;
#define fi first
#define se second
#define double long double
#define ll long long 
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>
 int main()
{

ll n ;
 cin>> n;
 
 vector<int> v;
 ll count =0;
 ll k;

 rep(i,0,n){
    cin>>k;
    v.pb(k);
 }

rep(i,0,n){
    count += v[i];
}
 ll ans= INT_MAX;
 for(ll i=0;i<(1<<n);i++){
    ll c=0;

    for(ll j=0;j<n;j++){
        if(1<<j & i)
        c+=v[j];
    }
    ans=min(ans , abs((count-c)-c));
 }
cout << ans;
    
}





