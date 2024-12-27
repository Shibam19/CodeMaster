#include<iostream>
using namespace std;
int ArithmeticProgression(int n){
    int AP;
    for(int i=1;i<=n;i++){
 AP=(3*n)+7;
    }
    return AP;
}
int main(){

    int n;
    cin>>n;

    
    cout<<"Arithmetic Preogression of nth term is"<<" "<<ArithmeticProgression(n)<<endl;

}