# include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"enter age";
    cin >>age;

    if(age<15){
        cout<<"you are under age! ";
    }else if(age>18){
        cout<<"you can vote! ";
    }

    return 0;
}