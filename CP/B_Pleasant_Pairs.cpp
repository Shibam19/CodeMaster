#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>ans;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
             if(arr[i]*arr[j]==i+j){
                vector<int>temp={i,j};
              ans.push_back(temp);
        }
    }    
   
} cout<<ans.size()<<endl;
}
}
