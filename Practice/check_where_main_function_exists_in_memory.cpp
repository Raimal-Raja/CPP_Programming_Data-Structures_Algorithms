#include <iostream>
using namespace std;

int main(){
    cout << reinterpret_cast<void*>(main) << "\n";
    return 0;
}