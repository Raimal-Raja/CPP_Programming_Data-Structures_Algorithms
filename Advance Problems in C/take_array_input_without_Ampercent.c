# include <stdio.h>


int main(){
    int arr[5];
    int n = 5;
    for(int i = 0;i<n;i++){
        scanf("%d",arr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}