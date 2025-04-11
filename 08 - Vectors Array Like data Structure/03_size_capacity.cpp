#include <iostream>
using namespace std;
#include <vector>

int main(){

    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<vec.size()<<endl<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<vec.size()<<endl<<vec.capacity();

    return 0;
}