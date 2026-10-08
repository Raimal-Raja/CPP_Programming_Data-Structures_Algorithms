#include <iostream>
using namespace std;

void swapUsingXOR(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b; 
}

int main(){
    int a = 1;
    int b = 3;

    swapUsingXOR(a, b);
    cout << a << " " << b << "\n";
}