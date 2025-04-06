# include <iostream>
using namespace std;

int main(){

    int max_value =0;
    int arr[7] = {1,2,45,66,443,2,4};
    for (int i = 0; i < 5; i++)
    {
        // if (max_value<arr[i])
        // {
        //    max_value = arr[i]; 
        // }
        
        max_value = max(arr[i],max_value);
    }
    cout<<max_value;
    
    return 0;
}