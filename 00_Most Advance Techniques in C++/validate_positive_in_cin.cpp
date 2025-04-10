# include <iostream>
using namespace std;

int main(){
    int n;

    if(cin>>n, (n< 1 || n <=0)){
        printf("invalid input!");
    }
    
    cout<<n;
    return 0;
}