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
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>
 int main()
{
int n;
cin >> n ;
 if(n<0)
 return  1;

 else{
int count =0;

for(int i=5; n/i >=1 ; i*=5){
  count += n/i;
}
cout << count<< endl;
}

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
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>
 int main()
{
int n;
cin >> n ;
 if(n<0)
 return  1;

 else{
int count =0;

for(int i=5; n/i >=1 ; i*=5){
  count += n/i;
}
cout << count<< endl;
}

>>>>>>> Stashed changes
}