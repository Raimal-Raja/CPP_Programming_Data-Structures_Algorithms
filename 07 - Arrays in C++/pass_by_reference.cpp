// the change in array passed to other function, if you made some changes, it will be refected to the main function
// name of array in c++ is address of array (it's a pointer)
# include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"In the function\n";

    for (int i = 0; i < size; i++)
    {
        // arr[i] = 2*arr[i];
        arr[i]*=2;
    }
    
}

int main(){

    int arr[] = {1,2,3,4};
    int size =4;


    changeArr(arr,size);
    cout<<"In the main function";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}