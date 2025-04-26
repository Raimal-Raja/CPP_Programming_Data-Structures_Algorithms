#include <iostream>
using namespace std;

int main(){
    // this line will store garbage address
    int **ptr;
    cout<<ptr<<endl;
    // to avaid this garbage value we create null pointer
    int **ptr2 = NULL;
    cout<<ptr2;
    return 0;
}