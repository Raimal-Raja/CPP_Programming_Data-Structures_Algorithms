#include <iostream>
using namespace std;

void sawpWithoutTemp(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){

    int a = 1;
    int b = 3;

    cout<<swapWithoutTemp(&a, &b);
}