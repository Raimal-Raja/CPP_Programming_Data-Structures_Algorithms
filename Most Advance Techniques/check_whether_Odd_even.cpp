# include <iostream>
using namespace std;

int main(){
    int num;
    scanf("%d",&num);
    if(num&1){
        cout<<"Odd"<<endl;
    }
    else{
    cout<<"even"<<endl;
    return 0;
    }
}