#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int INT_MAX=(pow(2,31)-1);
int INT_MIN=(-pow(2,31));
int ans=0;
 while(n){
   if((ans>INT_MAX/10)||(ans<INT_MIN))
{
   return 0;
}   
    int digit=n%10;
    ans=(10*ans)+digit;
    n=n/10;   
 }
cout<<ans<<endl;    
}