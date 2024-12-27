#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//approach 2....
int leftrotate(int arr[],int n,int k){
   reverse(arr,arr+k);
   reverse(arr+k,arr+n);
   reverse(arr,arr+n);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    leftrotate(arr,n,k);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
    cout<<endl;
   
}   
//TC=O(n+k) and SC=O(1)...better for each..