// adding to 2 to pointer means adding 2int = 8bytes
// ptr++ = ptr + 4bytes
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int arr[] = {1,2,3,4,5};
    int *ptr = &a;

    // cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr;

    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2);
    return 0;
}