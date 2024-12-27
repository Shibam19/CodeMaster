#include<bits/stdc++.h>
using namespace std;

int numberofsubarrays(vector<int>arr,int k){
    int prefixsum=0;
    int cnt=0;
    map<int,int>mpp;
    mpp[0]=1;
    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];
        int rem=prefixsum-k;
        cnt+=mpp[rem];
        mpp[prefixsum]++;
    }return cnt;
}

int main(){
    vector<int>arr = {3, 1, 2, 4};
    int k = 6;
    int ans=numberofsubarrays(arr,k);
    cout<<"number of subarrays: "<<ans<<endl;
}