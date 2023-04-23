#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int,int> pii;
typedef vector<pii> VP;
#define pb push_back
#define lp(i,n) for(int i=0;i<(n);++i)

// Comparison function to sort based on second element of pairs
bool as_second(const pii& a, const pii& b) {
    return a.second < b.second;
}

int main() {
    int n, x, y, ans = 0, temp = 0;
    cin >> n;
    VP vp;
    lp(i, n) {
        cin >> x >> y;
        vp.pb({x, y});
    }
    // Sort the vector of pairs based on the second element
    sort(vp.begin(), vp.end(), as_second);
    // Greedy algorithm to find maximum number of non-overlapping pairs
    lp(i, n) {
        if (temp <= vp[i].first) {
            temp = vp[i].second;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
