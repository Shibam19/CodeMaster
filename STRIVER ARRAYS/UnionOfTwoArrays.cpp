#include<bits/stdc++.h>
using namespace std;

vector<int> u(int arr1[],int n1,int arr2[],int n2){
    int  i=0,j=0;
    vector<int>unionarray;
     
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionarray.size()==0 || unionarray.back()!=arr1[i]){
                unionarray.push_back(arr1[i]);
             } i++;
        }
        else{
             if(unionarray.size()==0 || unionarray.back()!=arr2[j]){
                unionarray.push_back(arr2[j]);
              } j++;
        }
    }
    while(i<n1){
        if(unionarray.back()!=arr1[i]){
            unionarray.push_back(arr1[i]);
            
        }i++;
    }
     while(j<n2){
        if(unionarray.back()!=arr2[j]){
            unionarray.push_back(arr2[j]);
            
        }j++;
    }
    return unionarray;
}


int main(){
    int arr1[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1=10;
    int arr2[7]={2, 3, 4, 4, 5, 11, 12};
    int n2=7;
    vector<int>unionarray= u(arr1,n1,arr2,n2);
    
    cout<<"union of arr1 and arr2 is: "<<endl;
    for(int i=0;i<unionarray.size();i++){
        cout<<unionarray[i]<<" ";
    }
    return 0;
}
//TC is O(n1+n2) and SC is O(1)....



