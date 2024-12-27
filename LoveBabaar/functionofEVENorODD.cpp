#include<iostream>
using namespace std;
//even hua toh 1 odd hua toh 0.....
bool isEVEN(int num){
    if(num&1){
return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
     if(isEVEN(num)){
        cout<<"number is even"<<endl;
     }
     else{
        cout<<"number is odd"<<endl;
     }
}