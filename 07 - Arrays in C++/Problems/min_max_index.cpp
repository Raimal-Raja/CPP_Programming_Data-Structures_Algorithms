# include <iostream>
# include <vector>
using namespace std;

vector<int>maxSum(vector<int>nums){

    int n  = nums.size();
    int ans = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(nums[i]+nums[j] >ans){
                ans = nums[i]+nums[j];
                
            }
        }
      

    }
}