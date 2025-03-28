// exclusive or
// if bits are same answer will be 0 else answer will be 1
// 1 ^ 0 = 1
// 0 ^ 1 = 1
// 0 ^ 0 = 0
// 1 ^ 1 = 0
#include <iostream>
using namespace std;

int main(){
    int a = 1, b = 1;

    cout<<(a^b);
    return 0;
}