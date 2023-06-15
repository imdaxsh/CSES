#include<iostream>
//#include<bits/stdc++.h>
#define int long long
using namespace std;

signed rounds(){
    
    int n;
    cin>>n;
    vector<int>v(n+1) ,pos(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        pos[v[i]]=i;
        
    }
    
    int total_round=1;
    for(int i=2;i<=n;i++){
        if(pos[i] < pos[i-1]) total_round++;
    }
    return total_round;
}
signed main(){
    cout << rounds();
    return 0;
}