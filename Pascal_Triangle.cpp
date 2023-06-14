#include <bits/stdc++.h>

using namespace std;

long long int nCr(int n ,int r){
  long long res =1;
  for(int i=0;i<r;i++){
    res = res*(n-i);
    res = res/(i+1);
  }
  return res;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
   vector<vector<long long int>>ans;

   for(int row=1;row<=n;row++){
     vector<long long int>tempList;
     for(int col=1;col<=row;col++){
       tempList.push_back(nCr(row-1,col-1));
     }
     ans.push_back(tempList);
   }
   return ans;
}

int main(){
    int n=5;
   vector<vector<long long int>>ans = printPascal(n);
    for(auto it : ans){
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}