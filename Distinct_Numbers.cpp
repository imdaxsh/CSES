<<<<<<< Updated upstream
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int distinct_elements(vector<int> &arr, int n){
   // Sorting the array
   sort(arr.begin(), arr.end());
   // Traverse the sorted array
   int count = 0;
   for (int i = 0; i < n; i++){
      // Moving the index when duplicate is found
      while (i < n - 1 && arr[i] == arr[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}
// Main Function
int main(){
   vector<int> arr;
   int n ,k;
   cin >> n;
   for(int i=0;i<n;i++){
    cin>> k;
    arr.push_back(k);
   }
   cout <<distinct_elements(arr, n);
   return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int distinct_elements(vector<int> &arr, int n){
   // Sorting the array
   sort(arr.begin(), arr.end());
   // Traverse the sorted array
   int count = 0;
   for (int i = 0; i < n; i++){
      // Moving the index when duplicate is found
      while (i < n - 1 && arr[i] == arr[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}
// Main Function
int main(){
   vector<int> arr;
   int n ,k;
   cin >> n;
   for(int i=0;i<n;i++){
    cin>> k;
    arr.push_back(k);
   }
   cout <<distinct_elements(arr, n);
   return 0;
>>>>>>> Stashed changes
}