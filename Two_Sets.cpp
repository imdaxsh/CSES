<<<<<<< Updated upstream
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
#define repb(i,a,b) for(int i=a;i>=b;i++)
#define repc(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>




int main(){
  ll n;
  cin >> n;
  if(n*(n+1)/2%2){
    cout << "NO" ;
    return 0;

  }
  vector<int> v1,v2;
  int j=0;
  if(n%4)
    j=3;

    else
    j=4;

  for(int i=0;i<(n-1)/4;++i){
    v1.push_back(4*i+1+j);
    v1.push_back(4*i+4+j);
    v2.push_back(4*i+2+j);
    v2.push_back(4*i+3+j);
  }
  if(n%4){
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
  } else{
    v1.push_back(1);
    v1.push_back(4);
    v2.push_back(3);
    v2.push_back(2);
  }
  cout << "YES\n";
  cout <<v1.size()<< "\n";
  for(int i: v1)
  cout << i << " ";
  cout << "\n";
    cout <<v2.size()<< "\n";
  for(int i: v2)
  cout << i << " ";
  cout << "\n";
=======
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
#define repb(i,a,b) for(int i=a;i>=b;i++)
#define repc(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>




int main(){
  ll n;
  cin >> n;
  if(n*(n+1)/2%2){
    cout << "NO" ;
    return 0;

  }
  vector<int> v1,v2;
  int j=0;
  if(n%4)
    j=3;

    else
    j=4;

  for(int i=0;i<(n-1)/4;++i){
    v1.push_back(4*i+1+j);
    v1.push_back(4*i+4+j);
    v2.push_back(4*i+2+j);
    v2.push_back(4*i+3+j);
  }
  if(n%4){
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
  } else{
    v1.push_back(1);
    v1.push_back(4);
    v2.push_back(3);
    v2.push_back(2);
  }
  cout << "YES\n";
  cout <<v1.size()<< "\n";
  for(int i: v1)
  cout << i << " ";
  cout << "\n";
    cout <<v2.size()<< "\n";
  for(int i: v2)
  cout << i << " ";
  cout << "\n";
>>>>>>> Stashed changes
}