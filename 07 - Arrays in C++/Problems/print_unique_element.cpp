#include <iostream>
using namespace std;
#include <vector>

int main(){
    int ans = 0;
    vector<int>vec = {1,2,3,3,1,2,8};
    for(int val:vec){
        ans = ans^val;
    }
    cout<<ans;
    return 0;
}
