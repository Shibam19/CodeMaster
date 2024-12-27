#include<iostream>
using namespace std;

int merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }

}

void print(int arr3[],int n){
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[7]={1,2,7,8,0,0,0};
    int arr2[3]={2,4,6};

    int arr3[7]={0};
    merge(arr1,7,arr2,3,arr3);
    cout<<"answer is :"<<endl;
    print(arr3,7);

}