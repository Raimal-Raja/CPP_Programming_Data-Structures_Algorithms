#include <stdio.h>
int main(){
    int n;
    printf("Enter vallue of N: ");
    scanf("%d",&n);
    int f =1, i = 1;
    for(;i<=n; f*=i, i++)
    printf("%d", f);
    
    return 0;
}