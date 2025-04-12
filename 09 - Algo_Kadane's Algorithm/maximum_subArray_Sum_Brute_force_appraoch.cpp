#include <iostream>
using namespace std;

int main(){
    int n =5;
    int arr[5] = {1,2,3,4,5};

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = 0; j < n; j++)
        {
            currentSum += arr[j];
            maxSum = max(currentSum, maxSum);
        }
        
    }
    cout<<"max subarray sum = " <<maxSum <<endl;
    return 0;
    
}