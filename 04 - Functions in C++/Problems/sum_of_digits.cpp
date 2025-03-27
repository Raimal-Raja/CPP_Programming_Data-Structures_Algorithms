# include <iostream>
using namespace std;


int sum(int num){
    int sumOfDigits = 0;
    while (num>0){
        int digit = num%10;
        sumOfDigits += digit;
        num = int(num/10);
    }
    return sumOfDigits;
}


int main(){
    int num;
    cout<<"Enter 5 digit number: ";
    cin>>num;
    cout<<sum(num);
    return 0;
}