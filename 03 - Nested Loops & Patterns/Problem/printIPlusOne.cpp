//1
//2,2
//3,3,3
//4,4,4,4

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    
    for(int i = 0; i<=n-1; i++){
        for(int j = 0; j<i+1; j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
    }

}