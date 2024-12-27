#include<bits/stdc++.h>
using namespace std;

vector<int>intersection(int arr1[],int arr2[],int n1,int n2){
     vector<int>ans;
     int i=0,j=0;
     while(i<n1 && j<n2){
        if(arr1[i]>arr2[j]){
            j++;
        }
        
         else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            i++;
            j++;
        }
     }
     return ans;
}

int main(){
    int arr1[6]={1,1,2,2,3,3};
    int n1=6;
    int arr2[4]={1,2,3,4};
    int n2=4;
    vector<int>ans=intersection(arr1,arr2,n1,n2);
    cout<<"Intersection of arr1 and arr2 is: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
//TC is O(n1+n2) and SC is O(1).....