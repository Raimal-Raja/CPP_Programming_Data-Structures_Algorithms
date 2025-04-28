// time complexity = O(logn)
// space complexity = O(logn)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>nums,int target, int left, int right){

    int mid = left + (right - left)/2;

    for(int i = 1; i<nums.size(); i++){
        if(nums[mid] == target){
            return mid;
        }
        else if( target> nums[mid]){
           return binarySearch(nums, target, mid +1, right);
        }
        else if(target<nums[mid]){
            return binarySearch(nums, target, left,mid-1);
        }
    }
    return 0;
}


int main(){
    vector<int>nums = {1,2,3,4,5,6,7};
    int target = 2;
    int left =  0;
    int right = nums.size();

    int r = binarySearch(nums, target, left, right);
    cout<<r;
    return 0;
}