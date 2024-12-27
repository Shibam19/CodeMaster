#include<bits/stdc++.h>
using namespace std;

int  search(int arr[],int n,int k){
    for(int j=0;j<n;j++){
        if(arr[j]==k){
            return j;
        }
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
   int ans= search(arr,n,k);
   cout<<"ans is "<<ans<<endl;
}
//TC is O(n) and SC is O(1)