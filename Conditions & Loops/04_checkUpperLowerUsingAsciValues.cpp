# include <iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter a character:  ";
    cin>>ch;

    if(ch>=65&& ch<=90){
        cout<<"uppercase";
    }else{
        cout<<"lowercase";
    }

    return 0;
}