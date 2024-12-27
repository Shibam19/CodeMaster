#include<bits/stdc++.h>
using namespace std;
// PARAMETERISED....
/*void func(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    func(i-1,sum+i);
}

int main(){
    int n;
    cin>>n;
    func(n,0);
}*/

//functional...

int func(int n){
 if(n==0)return 0;
 else return n+func(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans =func(n);
    cout<<ans<<endl;
}