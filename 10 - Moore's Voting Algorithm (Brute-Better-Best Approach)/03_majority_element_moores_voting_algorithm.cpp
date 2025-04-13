// time complexity is O(n)

#include <iostream>
# include <vector>
using namespace std;

int mooresVoting(vector<int>nums){
    int ans = 0, freq = 0;
    int n = nums.size();
    for(int i =  0; i<n; i++){
        if(freq ==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    // if majority was not given that it always exists
    // int count = 0;
    // for(int val: nums){
    //     if (val == ans){
    //         count++;
    //     }
    // }
    // if(count> n/2) =>ans
    // else =>
    return ans;
}

int main(){

    vector<int>nums = {1,1,1,2,3};
    int ans = mooresVoting(nums);
    cout<<ans;
    return 0;
}