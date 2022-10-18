#include<iostream>
using namespace std;
 
int main(){
    long long n, input ,sum =0 ;
    cin >> n;
    
    for(int i=0 ;i < n-1 ;i++){
        cin >> input ;
        sum += input ;
    }
    cout << n*(n+1) /2 - sum<< endl;
    return 0 ;
}

// Here we have generated the sum of all number 
// and then simply subtracted the sum by the 
//sum of all n integers n*(n+1)/2
// hence we will get our missing integer
// Happy coding :)