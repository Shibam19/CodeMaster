#include<iostream>
using namespace std;
int swapALTERNATIVE(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int printARRAY(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[7]={1,2,3,4,5,6,7};

    swapALTERNATIVE(even,6);
    swapALTERNATIVE(odd,7);

    printARRAY(even,6);
    cout<<endl;
    printARRAY(odd,7);
    return 0;
}