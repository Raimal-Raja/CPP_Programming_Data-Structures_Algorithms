#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int a = 1;
    int b = 3;

    swapNumbers(a, b);
    cout << a << " " << b << "\n";

}