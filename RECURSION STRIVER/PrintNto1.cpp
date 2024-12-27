#include<bits/stdc++.h>
using namespace std;
/* RECURSION
void func(int i,int n){
  if(i<1)return ;
   cout<<i<<" ";
  func(i-1,n);
 
}

int main(){
    int n;
    cin>>n;
    func(n,n);
    return 0;
}
*/
// BACKTRACKING
void func(int i,int n){
if(i>n)return;
func(i+1,n);
cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    func(1,n);
}