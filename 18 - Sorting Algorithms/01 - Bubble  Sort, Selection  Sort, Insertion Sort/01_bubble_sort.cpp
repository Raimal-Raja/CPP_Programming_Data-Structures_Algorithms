#include <iostream>
#include <vector>
#include <algorithm>

using namespace  std;

void bubbleSort(vector<int>&arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }
    
}

void  printArray(vector<int>arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){
    int n = 5;
    vector<int>arr = {2,3,53,2,1};

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}