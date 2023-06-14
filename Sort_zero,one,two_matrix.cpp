
#include<bits/stdc++.h>
using namespace std;

 vector<int>sortColors(vector<int> &nums ) {
        int l = 0, i = 0, r = nums.size() - 1;
        while (i <= r) {
            if (nums[i] == 0) {
                swap(nums[i],nums[l]);
                l++;
                i++;
            }
            else if (nums[i] == 1) {
                i++;
            }
            else  
            {
                swap(nums[i],nums[r]);
                r--;
            }
        }
        return nums;
    }
    
    
    int main(){
        
        vector<int>nums={1,2,0,0,1,2}; 
        
        vector<int> ans = sortColors(nums);

    cout<<"The Final sorted array is : ";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
        
    }