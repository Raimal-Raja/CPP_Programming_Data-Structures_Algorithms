#include <iostream>
using namespace std;

void swapWithoutTemp(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){

    int a = 1;
    int b = 3;

    swapWithoutTemp(a, b);
    cout << a << " " << b << "\n";
}