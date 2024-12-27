#include<bits/stdc++.h>
using namespace std;
 
 

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       set<int>st;
       for(int i=0;i<n;i++){
        st.insert(arr[i]);
       }
      int mex=0;
      for(auto it:st){
        if(st.find(it)!=st.end()){
            mex++;
        }
      }
       int cnt=0;
       int MEX=mex;
       if(MEX==0){
        cnt=0;
         st.clear();
       }
       else if(mex==1){
        cnt=cnt+2;
    }
    else{
        cnt++;
}cout<<cnt<<endl;
    }
}