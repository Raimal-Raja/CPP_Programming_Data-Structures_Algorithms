#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>vec1;
    // vector<int>vec = {1,2,3,4,5};

    // .size() function
    // int size  = vec.size();
    // cout<<size;

    // push_back() function to push value to last index
    // vec1.push_back(49);
    vec1.push_back(33);
    vec1.push_back(55);
    // vec1.push_back(56);
    // int size  = vec1.size();
    // cout<<vec1[0]<<endl<<size;


    // pop_back() delete element from last in vector
    // vec1.pop_back();
    //  int size1  = vec1.size();
    //  cout<<size1;


    // .front() will return first value of vector, and back() will return last value
    // cout<<(vec1.front())<<endl<<(vec1.back()); 


    // .at() access value at perticular index
    cout<<vec1.at(0);

    return 0;
}