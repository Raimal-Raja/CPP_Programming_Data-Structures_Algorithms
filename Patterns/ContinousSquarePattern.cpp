#include <iostream>
using namespace std;

int main(){

    int n=3;
    int m = 1;
    for(int i = 0; i<=n-1;i++){
        for (int j = 0; j <=n-1; j++)
        {
            cout<<m<<" ";
            m++;

        }
        cout<<endl;
        
    }
    return 0;
}