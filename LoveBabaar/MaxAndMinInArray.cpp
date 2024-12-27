#include<iostream>
using namespace std;

int getMAX(int num[],int size){
    int max=num[0];
    for(int i=0;i<size;i++){
if(num[i]>max){
    max=num[i];
}

    } 
    return max;
}

int getMIN(int num[],int size){
   int min=num[1];
   for(int i=0;i<size;i++){
if(num[i]<min){
     min=num[i];
}

   }
   return min;
}


int main(){
    int size;
    cout<<"enter the size of the array: "<<endl;
    cin>>size;

    int num[size];
for(int i=0;i<size;i++){
   
     cin>>num[i];
}

cout<<"Maximun Number in Array is: "<<getMAX(num,size)<<endl;
cout<<"Minimum number in Array is: "<<getMIN(num,size)<<endl;
  return 0;  
}