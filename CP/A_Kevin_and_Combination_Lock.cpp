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
}/*5
165
6369
666
114514
133333332
*/
/*int check(int x){
    vector<int>arr;
    int n = arr.size();
    while(x>0){
        x=x%10;
        arr.push_back(x);
        x=x/10;
    }
    
    int i=0;
    int j=i+1;
    while(i<n-1 && j<n){
         if(arr[i]==3 && arr[j]==3){
            removeconsecutive3s(x);
              i=i+2;
              j=j+2;
            }
            else{
                i++;
                j++; 
            }
    }
   return arr;
}*/