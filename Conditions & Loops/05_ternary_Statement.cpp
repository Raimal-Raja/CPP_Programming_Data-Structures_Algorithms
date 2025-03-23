// unary  = one > +1,++
// binary = two > a+b
// ternary = three > 

# include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter age";
    cin >>age;

    cout<<(age>=18? "you can vote!": "you can't vote");

    return 0;
}