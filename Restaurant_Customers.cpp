<<<<<<< Updated upstream
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define rep(a,b,i) for(int i=a;i<b;i++)
int main(){
    
    int n;
     cin >> n;
 int x ,y;
 
 vector<pair<int ,int>> vp;
 rep(0,n,i){
     cin >> x >> y;
     vp.emplace_back(x,1);
     vp.emplace_back(y,-1);
     
 }
 int ans =0;
 int sum =0;
 
 sort(vp.begin(), vp.end());
 
 for(auto i:vp){
     
     sum+=i.second;
     
     ans=max(ans,sum);
 }
 cout << ans << endl;
     
=======
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define rep(a,b,i) for(int i=a;i<b;i++)
int main(){
    
    int n;
     cin >> n;
 int x ,y;
 
 vector<pair<int ,int>> vp;
 rep(0,n,i){
     cin >> x >> y;
     vp.emplace_back(x,1);
     vp.emplace_back(y,-1);
     
 }
 int ans =0;
 int sum =0;
 
 sort(vp.begin(), vp.end());
 
 for(auto i:vp){
     
     sum+=i.second;
     
     ans=max(ans,sum);
 }
 cout << ans << endl;
     
>>>>>>> Stashed changes
}