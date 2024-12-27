#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// approach 1 ...
leftrotate(int arr[],int n,int k){
    if(k>n){
        k=k%n;
    }
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i+k-n];
    }
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
}   
// TC=O(n+k) and SC=O(k) 