#include<bits/stdc++.h>
using namespace std;

int number(vector<int>arr,int k){
    map<int,int>mpp;
    int cnt=0;
    int xr=0;
    mpp[0]=1;
    for(int i=0;i<arr.size();i++){
       xr=xr^arr[i];
       int rem=xr^k;
       cnt=cnt+mpp[rem];
       mpp[xr]++;
    }return cnt;
}

int main(){
    vector<int>arr={4,2,2,6,4};
    int k=6;
    int ans =number(arr,k);
    cout<<"the no of subarray is "<<ans<<endl;
}