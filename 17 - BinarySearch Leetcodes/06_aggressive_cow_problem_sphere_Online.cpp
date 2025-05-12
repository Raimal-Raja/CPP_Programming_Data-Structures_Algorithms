#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;


bool isPosible(vector<int>&arr, int N, int C, int minAllowedDis){
    int cows = 1, lastStallPos = arr[0];

    for(int  i = 1;i<N;i++){
        if(arr[i] - lastStallPos>= minAllowedDis){
            cows ++;
            lastStallPos = arr[i];
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}



int getDistace(vector<int>&arr, int N, int C){
    
    sort(arr.begin(), arr.end());

    int st = 1, end =arr[N-1]-arr[0], ans = -1;

    while (st<=end)
    {
        int mid = st+(end-st)/2;

        if(isPosible(arr,N,C,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    int N = 5, C = 3;
    vector<int>arr = {1,2,8,4,9};
    cout<<getDistace(arr, N,C)<<endl;
    return 0;
}