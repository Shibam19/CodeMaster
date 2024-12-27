#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>arr){
    int n=arr.size();
     vector<int>pos;
     vector<int>neg;
     for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else if(arr[i]<0){
            neg.push_back(arr[i]);
        }
     }
     if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }

        if(neg.size()>pos.size()){
        for(int i=0;i<pos.size();i++){
            arr[2*i]=neg[i];
            arr[2*i+1]=pos[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }
     }
}return arr;
}

int main(){
    vector<int>arr={1,2,-4,-5,3,4};
    vector<int>ans=rearrange(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
//Time Complexity: O(2*N)
//Space Complexity:  O(N/2 + N/2) = O(N) 