#include <bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if( mat[i][j]==target)
             return true;
        }
    }
    return false;
}


int main()
{
    vector<vector<int>> mat = {{1,2,3,4},{1,10,8,7},{1,1,1,2}};

    int target = 8;
    cout<<searchMatrix(mat,target)<<endl;

    return 0;  

}