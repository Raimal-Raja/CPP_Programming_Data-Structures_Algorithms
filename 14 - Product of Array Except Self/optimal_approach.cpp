#include <iostream>
#include <vector>
using namespace std;

vector<int>productExceptSelf(vector<int>nums){
    int n = nums.size();
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    vector<int>ans(n,1);

    // find prefix
    for(int i = 1; i<n; i++){
        prefix[i] = prefix[i-1]*nums[i-1];
    }

    // calculate suffix
    for(int i = n-2; i>=0; i--){
        suffix[i] = suffix[i+1]*nums[i+1];  
    }

    // calculate  ans
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i]*suffix[i];
    }
    return ans;
    
}

int main(){

    vector<int>nums = {1,2,3,4,5,6};
    vector<int>ans = productExceptSelf(nums);
    for(int val:ans){
        cout<<val<<endl;
    }
}