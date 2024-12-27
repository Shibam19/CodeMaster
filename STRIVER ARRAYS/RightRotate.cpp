#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rightrotate(int arr[],int n,int k){
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
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
    rightrotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//TC=O(n+k) and SC=O(1)...better for each..