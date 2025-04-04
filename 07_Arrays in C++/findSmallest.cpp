# include <iostream>
using namespace std;

int main(){

    int min_value =100;
    int arr[7] = {1,2,45,66,443,2,4};
    for (int i = 0; i < 5; i++)
    {
        if (min_value>arr[i])
        {
           min_value = arr[i]; 
        }
        
    }
    cout<<min_value;
    
    return 0;
}