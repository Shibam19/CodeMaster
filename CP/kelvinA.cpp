#include<bits/stdc++.h>
using namespace std;

int removeconsecutive3s(int x){
    int ans=0;
    int mul=1;
    int prevdig=-1;
    int dig;
    while(x>33){
        dig=x%10;
        x=x/10;
        if(prevdig!=3 && dig!=3){
            ans=ans+dig*mul;
            mul=mul*10;
        }prevdig=dig;
    }return ans;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;
        removeconsecutive3s(x);
       bool flag=false;

        while(x>=0){
           if(x==0){
                flag=true;
                break;
            }  
            if(x>=33){ 
                x=x-33;
             
            }else{
                break;
            }
            
            
        }if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    }
    
   return 0;
}