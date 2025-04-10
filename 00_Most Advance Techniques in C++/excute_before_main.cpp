# include <iostream>
using namespace std;

__attribute__((constructor))
void x(){
    cout<<"Excute first!"<<"\n";
}
__attribute__((constructor))
void x1(){
    cout<<"Excute 2!"<<"\n";
}

int main(){
    cout<<"Execute 3";
}
