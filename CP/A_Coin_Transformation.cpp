#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int coins=1;
    
        while(n>3){
            n=(n/4);
            coins=coins*2;
        }cout<<coins<<endl;
    }
    }
