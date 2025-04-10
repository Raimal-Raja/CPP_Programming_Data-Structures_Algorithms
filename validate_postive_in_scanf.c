# include <stdio.h>

int main(){
    int n;

    if(scanf("%d",&n) < 1 || n <=0){
        printf("invalid input!");
    }
    
    printf("%d",n);
    return 0;
}