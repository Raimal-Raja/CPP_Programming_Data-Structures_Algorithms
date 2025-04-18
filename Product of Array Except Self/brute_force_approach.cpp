#include <iostream>
# include  <vector>
using  namespace std;

vector<int>sumTwoArr(vector<int>nums){
    int n  = nums.size();
    vector<int>ans(n,1);

    for(int i = 0; i<n; i++){
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if(i!= j){
                ans[i] *= nums[j];
            }
            
        } 
    }
    return ans;
}

int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans = sumTwoArr(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}