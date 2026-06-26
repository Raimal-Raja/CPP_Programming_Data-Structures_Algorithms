#include <iostream>
using namespace sdt;

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int a = 1;
    int b = 3;

    cout<<swapNumbers(&a, &b);

}