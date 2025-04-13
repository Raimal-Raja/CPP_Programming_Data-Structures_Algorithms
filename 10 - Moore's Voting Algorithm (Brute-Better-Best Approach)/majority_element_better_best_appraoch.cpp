// time complexity = O(logn +n), log(n) for sorting array, O(n) for looping once
// overall = O(nlogn)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElementBetterBest(vector<int>nums){
    
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for(int i = 1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }

        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}

int main(){

    vector<int>nums = {1,1,2,2,2,};

    int ans = majorityElementBetterBest(nums);
    cout<<ans;
    return 0;
}