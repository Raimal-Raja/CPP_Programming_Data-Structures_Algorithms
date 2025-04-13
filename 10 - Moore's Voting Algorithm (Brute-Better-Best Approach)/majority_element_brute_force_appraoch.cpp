#include <iostream>
# include <vector>
using namespace std;

int majorityElement(vector<int>nums){
    int n = nums.size();

    for(int val: nums){
        int freguency =0;
        
        for(int elem : nums){
            if(elem == val){
                freguency++;
            }
        }
        if(freguency> n/2){
            return val;
        }
    }
    return -1;
}


int main(){

    vector<int>nums = {2,2,1,1,1,2,2};

    int ans = majorityElement(nums);
    cout<<ans;

    return 0;
}