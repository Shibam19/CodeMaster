#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i=1;

while(i<=n){
    int space=1;
    while(space<=(i-1)){
        cout<<" ";
        space=space+1;
    }
int j=1;
        while(j<=(n-i+1)){


            cout<<i;
            j=j+1;
        }
    
cout<<endl;
i=i+1;

}

}


