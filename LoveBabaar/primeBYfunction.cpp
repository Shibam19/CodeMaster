#include<iostream>
using namespace std;
//prime hai toh 1 return karo warna 0....
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
    
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
}
