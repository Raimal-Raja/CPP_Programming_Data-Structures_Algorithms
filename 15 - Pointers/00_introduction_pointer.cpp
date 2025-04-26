// pointers > pointers are special variable that store address of other variables
#include <iostream>
using namespace std;

int main(){

    int a  = 6;
    int* ptr = &a;

    cout<<ptr<<endl;
    cout<<&a;
}