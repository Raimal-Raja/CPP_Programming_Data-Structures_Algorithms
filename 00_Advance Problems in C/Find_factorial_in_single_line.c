#include <stdio.h>
#include <math.h>

int main(){
    int n = 5;
    int fact = tgamma(n+1);
    printf("%d",fact);
    return 0;
}