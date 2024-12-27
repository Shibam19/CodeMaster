#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int prod=1,sum=0;
while(n){
int digit=n%10;
prod=prod*digit;
sum=sum+digit;
n=n/10;
}
int subtract= (prod-sum);
cout<<"subtract is:"<<subtract<<endl;

}