#include<iostream>
using namespace std;

int main(){
int ch='1';
int num=2;

switch( ch ){
    case 1: cout<<"first"<<endl;
    break;
    case '1':switch(num){
       case 2:  cout<<"num"<<endl;
break;
}
cout<<"character"<<endl;
break;
default: cout<<"it's default"<<endl;
}
}