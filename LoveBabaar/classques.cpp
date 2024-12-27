#include<iostream>
using namespace std;


int pyq(int x){
    x=22;
    return x;
}

int abc(int x){
    x=11;

pyq( x);

}

int x=110;
int main(){
int x=5;

 abc( x);
 cout<<"value is "<<abc(x)<<endl;
}

