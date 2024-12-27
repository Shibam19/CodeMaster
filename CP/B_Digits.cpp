#include<bits/stdc++.h>
using namespace std;
long long factorial(int n){
long long ans=1;
for(int i=2;i<=n;i++){
    ans=ans*i;
}return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>> n >> d;
       long long ans=factorial(n);

       for(int i=1;i<ans;i++){
        d=(d*10)+d;
   
       }
       
      for(int i=1;i<9;i+=2){
        if(d%i==0){
            cout<<i<<" ";
        }
      }
      cout<<endl;
    }
}