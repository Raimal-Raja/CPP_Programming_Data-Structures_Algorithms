#include <stdio.h>
int main(){

    // find size of array
    int arr[] ={2,3,4,5};
    int sz = sizeof(arr)/sizeof(int);

    printf("%d",sz);
    return 0;
}