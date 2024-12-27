#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int> arr){
    int n=arr.size();
    long long Sn=(n*(n+1))/2;
    long long S2n=(n*(n+1)*(2*n+1))/6;
    int S=0;
    int S2=0;
    for(int i=0;i<n;i++){
       S+=arr[i];
       S2+=arr[i]*arr[i];
    }
    long long val1=S-Sn; //x-y
    long long val2=S2-S2n; //(x-y)(x+y)
    val2=val2/val1; //x+y
    //x=repeating //y=missing
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};
}

int main(){
   vector<int> arr={3,1,2,5,4,6,7,5};
   vector<int> ans =find(arr);
   cout<<ans[0]<<" "<<ans[1]<<endl;
}