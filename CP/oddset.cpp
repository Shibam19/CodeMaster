#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>arr){
    int oddcnt=0;
    int evencnt=0;
    for(int i=0;i<(arr.size()/2);i++){
        if((arr[2*i]+arr[i*2+1])%2==1){
            oddcnt++;
        }
        else{
            evencnt++;
        }
    }
    if(evencnt==0){
        return true;
    }
    return false;
   
}


int main(){
    int t;
    cin>>t;
    //vector<int>arr;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(2*n);
        
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
       if(check(arr)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
     
}


