# include <iostream>
using namespace std;

__attribute__((constructor))
void x(){
    cout<<"Excute first!";
}

int main(){
    cout<<"Execute secondly";
}