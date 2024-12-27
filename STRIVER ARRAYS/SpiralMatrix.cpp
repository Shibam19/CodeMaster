#include<bits/stdc++.h>
using namespace std;

vector<int>spiral(vector<vector<int>> &matrix,int n,int m){
    vector<int>ans;
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=m-1;
    while(top<=bottom && left<=right){

        for(int i=left;i<=right;i++){
           ans.push_back(matrix[top][i]);
         
        }  top++;
        for(int i= top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
          
        }  right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
               
            } bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
              
            }  left++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>matrix={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int>ans=spiral(matrix,n,m);
    for(auto it:ans){
        cout<<it<<",";
    }
}