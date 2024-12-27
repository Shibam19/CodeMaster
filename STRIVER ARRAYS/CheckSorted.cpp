#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){

        }else{
            return false;
        }
    }return true;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=check(arr,n);
    if(ans){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
// TC=O(n) and SC=O(1).....