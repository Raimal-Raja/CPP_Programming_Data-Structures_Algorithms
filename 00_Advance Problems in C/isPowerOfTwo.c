#include <stdio.h>
#include <stdbool.h>

bool isPowerOf(int n){

    return (n>0 && (n&(n-1)) ==0);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    bool result = isPowerOf(n);
    printf("%d",result);

}