#include <stdio.h>
#include <math.h>

int main(){
    int arr[] ={90,4,4,3,7,8,9,2,1};
    int target = 5;
    for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i]+arr[i+1] == target){
            printf("found");
        }
    }
    printf("not found");
    return 0;
}