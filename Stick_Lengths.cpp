#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
   ll n;
    cin >> n;
     ll k;
        vector<int> v;
        for(ll i =0;i<n;i++){
           
             cin >> k;
             v.push_back(k);
        }

       sort(v.begin(),v.end());

        ll count = 0;
        if(n%2 == 0){
            count = (n/2)-1;
        }
        else{
             count = n/2;
        }

        ll add =0;
     ll l = v[count];

        for(ll i=0;i<n;i++){
       ll z = abs(v[i] - l);
       add += z;
        }
   cout << add << endl;
     
}