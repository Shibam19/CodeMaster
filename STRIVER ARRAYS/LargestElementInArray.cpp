#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }return largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans =largest(arr,n);
    cout<<"ans is "<<ans<<endl;
    return 0;
}

//time complexity is O(n) and space is O(1).....