# include <iostream>
using namespace std;

// copy of argument is passed to function

int sum(int a, int b){
    a = a+13;
    b = b+33;
    return a+b;
}

int main(){
    int x = 2;
    int y = 3;
    cout<<(x+y)<<"\n";
    cout<<sum(x,y);
    return 0;
}