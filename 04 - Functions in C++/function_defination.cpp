#include <iostream>
using namespace std;

void printMyName(){

    cout<<"Hello Raimal Raja";
}

int sumTwoValues(int a, int b){
    int r = a+b;
    return r;
}

int main(){
    int a,b;
    printMyName();
    cout<<"\nEnter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<sumTwoValues(a,b);

    return 0;
}