#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int>arr){
    vector<vector<int>>ans;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            sum=arr[i]+arr[j]+arr[k];
            if(sum==0){
                vector<int>temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])j++;
                while(j<k && arr[k]==arr[k+1])k--;
            }
            else if(sum<0)j++;
            else k--;
            
        }
    }
    return ans;
}

int main(){
    vector<int>arr={-1, 0, 1, 2, -1, -4};
    vector<vector<int>>ans=threesum(arr);
    for(auto it: ans){
        cout<<"[";
        for(auto ele: it){
            cout<< ele<<" ";
        }cout<<"]";
    }cout<<endl;
}
    