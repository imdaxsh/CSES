#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){ 
    // take the user input n
    long long n;
    cin>>n;
    // check whether the n != 1 or not 
    while(n != 1){
          cout << n << " ";

          // here check whether n is even or odd 
          // if even divide the n by 2
          // else firstly multiply the n by 3 and then add 1 

        if(n%2 == 0 ){
            n = n/2 ;
        }
        else 
         n = n*3+1;
        }
        // when finally while condition false 
        // return an additional 1 at the end 
         cout << 1 << " ";
 return 0;    
}

// happy coding :)