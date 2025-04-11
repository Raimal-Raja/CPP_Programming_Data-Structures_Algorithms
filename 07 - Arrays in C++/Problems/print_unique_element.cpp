#include <iostream>
using namespace std;

int main(){
    int ans = 0;
    int vec[]= {1,2,3,3,1,2,8};
    for(int val:vec){
        ans = ans^val;
    }
    cout<<ans;
    return 0;
}
