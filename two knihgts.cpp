#include<bits/stdc++.h>

#define ll long long 
using namespace std;

int main(){
  ll n ;
  cin >> n;
  for(ll i=1; i<= n;i++){
    ll totalpositon =(i*i) * (i*i-1) /2;
    ll attackposition = 4*(i-1)*(i-2);
    
    cout << totalposition - attackposition << endl;
  }
