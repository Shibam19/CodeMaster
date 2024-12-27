#include<iostream>
using namespace std;
int main(){
 //N is total amount....
   int N=1330;
   cout<<"total amount is "<<N<<endl;
   int N1,N2,N3,N4;
   //case 100
   N1=N/100;
   cout<<"number of 100 rs used is "<<N1<<endl;
      N1=N%100;
      

   //case 50
    N2=N1/50;
   cout<<"number of 50 rs used is "<<N2<<endl;
      N2=N1%50; 


      //case 20
       N3=N2/20;
   cout<<"number of 20 rs used is "<<N3<<endl;
      N3=N2%20; 


      //case 1
       N4=N3/1;
   cout<<"number of 1 rs used is "<<N4<<endl;
       
}