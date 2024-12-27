#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>ans;
        for(int i=1;i<n;i++){
          if((i)+(n-i)==n){
            vector<int>temp={i,n-1};
            ans.push_back(temp);
          }
        }
        cout<<ans.size()<<endl;
    }
}