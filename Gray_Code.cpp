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
#define int long long
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>
#define endl '\n'

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin>>n;
    int a[1<<n + 1] = {0};
    for (int i = 0; i < n; i++)
    	cout<<0;
    cout<<endl;
    a[0] = 1;
    int x = 0;
    for (int i = 1; i < 1<<n; i++) {
    	for (int j = 0; j < n; j++) {
    		int y = x^(1<<j);
    		if (!a[y]) {
    			x = y;
    			a[y] = 1;
				string s;
				while (y) {
					if (y&1) s += '1';
					else s += '0';
					y >>= 1;
				}
				reverse(s.begin(), s.end());
				for (int i = 0; i < n - s.size(); i++)
					cout<<0;
				cout<<s<<endl;
				break;
    		}
    	}
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
#define int long long
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>b;i--)
#define MOD  1000000007
#define pii pair<int,int>
#define pdd pair<double,double>
#define endl '\n'

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin>>n;
    int a[1<<n + 1] = {0};
    for (int i = 0; i < n; i++)
    	cout<<0;
    cout<<endl;
    a[0] = 1;
    int x = 0;
    for (int i = 1; i < 1<<n; i++) {
    	for (int j = 0; j < n; j++) {
    		int y = x^(1<<j);
    		if (!a[y]) {
    			x = y;
    			a[y] = 1;
				string s;
				while (y) {
					if (y&1) s += '1';
					else s += '0';
					y >>= 1;
				}
				reverse(s.begin(), s.end());
				for (int i = 0; i < n - s.size(); i++)
					cout<<0;
				cout<<s<<endl;
				break;
    		}
    	}
    }
>>>>>>> Stashed changes
}