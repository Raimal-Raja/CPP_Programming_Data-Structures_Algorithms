// local variable, that are define within a block of code, in function,
// or in a loop, are only accessible within that block of code

# include <iostream>
using namespace std;

int main (){

    for(int i = 0; i<10; i++){
        cout<<i<<endl; // i is accessible here.
    }
    // cout << i; // Does not compile: i is local to the loop.
    return 0;
}