#include<bits/stdc++.h>
using namespace  std;

int find(int arr[],int n){
    
int XOR=0,XOR1=0;
for(int i=0;i<n-1;i++){
    XOR=XOR^arr[i];
     XOR1=XOR1^(i+1);
}
 int XOR2=XOR^XOR1^n;
return XOR2;

}

int main(){
    int arr[5]={1,2,4,5};
    int n=5;
    int ans =find(arr,n);
    cout<<"ans is "<<ans<<endl;
}
//TC is O(n) and SC is O(1)