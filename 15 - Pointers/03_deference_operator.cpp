// * asterisk 
// this find the value of address, bring the value on the that address
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int * ptr = &a;
    cout<<*(&a)<<endl;
    cout<<*(ptr);

    return 0;
}