#include<bits/stdc++.h>
using namespace std;
#define lli long long int
 int main(){
     lli n;
     lli count =0;
      cin >> n;
       vector<lli> v;
       for(lli i=0;i<n;i++){
           lli k;
           cin>>k;
           v.push_back(k);
       }
     lli curr_sum =0;
     lli max_sum =INT_MIN;
     
     for(lli i=0;i<n;i++){
         curr_sum+=v[i];
         if(curr_sum <0){
             curr_sum =0;
         }
         
         max_sum =max(max_sum ,curr_sum);
     }
     if(max_sum>0){
     count = max_sum ; 
     }
     else{
     sort(v.begin(),v.end());
    count = v[n-1];
     }
     cout << count << endl; 
 }