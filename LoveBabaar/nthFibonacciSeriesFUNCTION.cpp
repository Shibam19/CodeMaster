#include<iostream>
using namespace std;
int Fibonacci(int n){

int ans=0,ANS=0;

for(int i=0;i<=n;i++){
ans=ans+i;
ANS=ans+ANS;
}



}
int main(){
    int n;
    cin>>n;
Fibonacci(n);
cout<<"nth term of Fibonacci Series is "<<Fibonacci(n)<<endl;

}