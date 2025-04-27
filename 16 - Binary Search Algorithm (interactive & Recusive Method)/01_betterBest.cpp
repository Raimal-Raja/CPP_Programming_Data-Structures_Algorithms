#include <iostream>
#include <vector>
using namespace std;


int binar_search(vector<int>nums, int target){

    int left = 0;
    int right = nums.size();

    for(int i = 0; i<nums.size(); i++){
        int mid = left + (right-left)/2;
        if(nums[mid] ==target){
            return mid;
        }
        else if(target > nums[mid]){
            left = mid+1;
        }
        else{
            right =  mid -1;
        }
    }
    return -1;

}


int main(){


    vector<int>nums = {1,2,3,4,5,6,7};
    int target = 5;

    int r = binar_search(nums,target);
    cout<<r;
}