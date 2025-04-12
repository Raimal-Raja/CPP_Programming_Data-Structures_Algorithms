// pair sum: return pair in sorted arry with target sum
#include <iostream>
using namespace std;
# include <vector>

int main(){
    int target = 9;
    vector<int>vec_2;
    vector<int>vec = {29,43,11,33,7,5,2};

    for(int i = 0; i<vec.size(); i++){
        for(int j = 0; j<vec.size();j++){
            if(target == (vec[i] + vec[j])){
                vec_2.push_back(j);
            }
        }
    }
    cout<<vec_2[1]<<" "<<vec_2[0];
    return 0;
}