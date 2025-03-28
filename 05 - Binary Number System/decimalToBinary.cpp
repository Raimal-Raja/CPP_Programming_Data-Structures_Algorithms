#include <iostream>
using namespace std;

int decimalToBinary(int number){
    int binary_number = 0;
    int power =  1;

    while (number>0){
        int rem =  number%2;
        number = int(number/2);
        binary_number += (rem*power);
        power *=10;
    }
    return binary_number;
}

int main(){

    int number;
    cout<<"Enter five digit number: ";
    cin>>number;

    cout<<decimalToBinary(number);

    return 0;
}