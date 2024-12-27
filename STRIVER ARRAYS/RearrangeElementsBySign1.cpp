#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>arr){
    int n=arr.size();
    int posindex=0;
    int negindex=1;
    vector<int>ans1(n,0);
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans1[posindex]=arr[i];
            posindex+=2;
        }
        else if(arr[i]<0){
            ans1[negindex]=arr[i];
            negindex+=2;
        }
    }return ans1;
}

int main(){
  vector<int>arr={1,2,-4,-5};
  vector<int>ans=rearrange(arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
} 
//Time Complexity: O(N)
//Space Complexity:  O(N) 