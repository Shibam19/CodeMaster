#include<iostream>
using namespace std;
//new theme......
int main(){
int n;
cin>>n;
int count=0;

while(n){

if(n&1){
  
count++;
}
n=n>>1;


}
cout<<count<<endl;
}

