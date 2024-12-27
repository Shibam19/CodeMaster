#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>arr,int target){
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        int num=arr[i];
        int more=target-num;
        if(mpp.find(more)!=mpp.end()){
            return{mpp[more],i};
        }
        mpp[num]=i;
    }return {-1,-1};
}

int main(){
    vector<int>arr={2,7,11,15};
    int target=9;
    vector<int>ans=twosum(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}