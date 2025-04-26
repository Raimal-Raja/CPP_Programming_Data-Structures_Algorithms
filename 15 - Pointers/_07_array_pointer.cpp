// variable of arry is actually a pointer which is pointing to zeroth element
// it is stored on the zeroth element address
// special pointer or constant pointer or array pointer

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4};
    // cout<<&arr[0]<<endl;
    // cout<<&arr;

    cout<<arr<<endl;
    cout<<*arr;
    return 0;
}