#include<iostream>
using namespace std;
int main(){
int a;
int b;
cout<<"enter value of a:"<<endl;
cin>>a;
cout<<"enter value of b:"<<endl;
cin>>b;
char op;
cout<<"enter the operation u want to do:"<<endl;
cin>>op;

switch(op){
case '+': cout<<(a+b)<<endl;
break;
case '-':cout<<(a-b)<<endl;
break;
case '/':cout<<(a/b)<<endl;
break;
case '*':cout<<(a*b)<<endl;
break;
case '%':cout<<(a%b)<<endl;
break;
default: cout<<"enter a valid operation"<<endl;
}

}