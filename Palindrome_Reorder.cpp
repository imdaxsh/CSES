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
string s;
cin>> s;

int f[26] ={0};
rep(i,0,s.size()){
    f[s[i]-65]++;
}

int c=0;
rep(i,0,26){
    if(f[i]%2!=0)
    c++;
}
if(c>1)
cout << "NO SOLUTION" ;
else{
    vector<char> v1,v2;
    rep(i,0,26){
        if(f[i]%2 !=0){
            while(f[i]--){
                v2.pb(i+65);
            }
        }

        else if(f[i]>0 and f[i]%2 == 0){
            int x=f[i]/2;
            while(x--){
                v1.pb(i+65);
            }
        }
    }
    rep(i,0,v1.size()){
        cout << v1[i];
    }
    rep(i,0,v2.size())
    cout << v2[i];

    for(int i= v1.size()-1 ;i>=0 ;i--){
        cout<< v1[i];
    }
}
return 0;
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
string s;
cin>> s;

int f[26] ={0};
rep(i,0,s.size()){
    f[s[i]-65]++;
}

int c=0;
rep(i,0,26){
    if(f[i]%2!=0)
    c++;
}
if(c>1)
cout << "NO SOLUTION" ;
else{
    vector<char> v1,v2;
    rep(i,0,26){
        if(f[i]%2 !=0){
            while(f[i]--){
                v2.pb(i+65);
            }
        }

        else if(f[i]>0 and f[i]%2 == 0){
            int x=f[i]/2;
            while(x--){
                v1.pb(i+65);
            }
        }
    }
    rep(i,0,v1.size()){
        cout << v1[i];
    }
    rep(i,0,v2.size())
    cout << v2[i];

    for(int i= v1.size()-1 ;i>=0 ;i--){
        cout<< v1[i];
    }
}
return 0;
>>>>>>> Stashed changes
}