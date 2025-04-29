#include <iostream>
using namespace std;


#

bool isPowerOf(int n){

    return (n>0 &&(n&(n-1))==0);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    isPowerOf(n);
    printf("%d",isPowerOf);

}