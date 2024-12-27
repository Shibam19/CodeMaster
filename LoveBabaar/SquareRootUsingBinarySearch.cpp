#include<iostream>
using namespace std;

long long int sqrt(int n){
int s=0;
long long int e=n;
long long int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    
    long long int square= mid*mid;
    if(square==n){
        return mid;
    }
    else if(square>n){
        e=mid-1;
    }
    else{
        ans=mid;
        s=mid+1;
    }
    mid=s+(e-s)/2;

}
return ans;
}

double morePRECESION(int n, int precesion,int tempSol){
double factor=1;
double ans=tempSol;
for(int i=0;i<precesion;i++){
    factor=factor/10;
    for(double j=ans;j*j<n;j+=factor){
        ans =j;
    }
}return ans;
}


int main(){
int n;
cout<<"enter the number: "<<endl;
cin>>n;
int precesion;
cout<<"enter precesion: "<<endl;
cin>>precesion;

int tempSol=sqrt(n);
cout<<"ans is: "<<morePRECESION(n,precesion,tempSol)<<endl;

    return 0;
}