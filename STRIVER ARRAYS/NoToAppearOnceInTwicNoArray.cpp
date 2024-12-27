#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n){
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }return XOR;
}

int main(){
    int arr[7]={1,1,2,3,3,4,4};
    int n=7;
    int ans=find(arr,7);
    cout<<"ans is "<<ans<<endl;
    return 0;
}
//TC is O(n) and SC is O(1)....