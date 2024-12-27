//printing nth row ...
#include<bits/stdc++.h>
using namespace std;

int ncr(int n,int r){
    long long ans=1;
    for(int i=0;i<r;i++){
      ans=ans*(n-i);
      ans=ans/(i+1);
    }return ans;
}

int main(){
    int r=6;
    for(int c=1;c<=r;c++){
        cout<<ncr(r-1,c-1)<<" ";
    }
    return 0;
}