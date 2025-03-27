#include <iostream>
using namespace std;

int binaryNumber(int number){
    int binary_number = 0;

    while (number>0){
        int digit =  number%2;
        binary_number = (binary_number*10)+digit;
        number = int(number/2);
    }
    return binary_number;
}

int main(){

    int number;
    cout<<"Enter five digit number: ";
    cin>>number;

    cout<<binaryNumber(number);

    return 0;
}