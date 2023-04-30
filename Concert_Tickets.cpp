<<<<<<< Updated upstream
#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    
    int n ,m;
    cin >> n >> m;
    
    multiset<int , greater<int>> v;
    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        v.insert(k);
    }
    int c =0;
    multiset<int>:: iterator it;
    while(m--){
        cin >> c;
        it = v.lower_bound(c);
        if(it == v.end())
         cout << -1 << endl;
         else
         {
             cout << *it << endl;
             v.erase(it); 
         }
    }
}
=======
#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    
    int n ,m;
    cin >> n >> m;
    
    multiset<int , greater<int>> v;
    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        v.insert(k);
    }
    int c =0;
    multiset<int>:: iterator it;
    while(m--){
        cin >> c;
        it = v.lower_bound(c);
        if(it == v.end())
         cout << -1 << endl;
         else
         {
             cout << *it << endl;
             v.erase(it); 
         }
    }
}
>>>>>>> Stashed changes
