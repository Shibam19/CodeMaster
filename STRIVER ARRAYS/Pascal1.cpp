//finding element in pascal traingle row and col given ....
#include<bits/stdc++.h>
using namespace std;

int ncr(int n,int r){
  long long ans=1;
  for(int i=0;i<2;i++){
    ans=ans*(n-i);
    ans=ans/(i+1);
  }return ans;
}

int main(){
     int r=5;
     int c=3;
    int element=ncr(r-1,c-1);
    cout<<"the element is: "<<element<<endl;
}