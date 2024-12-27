#include<iostream>
using namespace std;
int PrintArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
    }
    cout<<"printing DONE"<<endl;
}
int main(){
    int first[15]={0};
    PrintArray(first,15);


    int second[10]={2,7};
    PrintArray(second,10);


    int third[3]={5,7,11};
    PrintArray(third,3);
    int thirdSIZE= sizeof(third)/sizeof(int);
    cout<<"size of third is "<<thirdSIZE<<endl;
}