#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){

    
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    vector<string> ans;
    do{
        ans.pb(s);
        
    }while(next_permutation(s.begin(), s.end()));
    cout << ans.size() << endl;

    for(auto x : ans){
         cout << x << endl;
    }
    return 0;
       
}