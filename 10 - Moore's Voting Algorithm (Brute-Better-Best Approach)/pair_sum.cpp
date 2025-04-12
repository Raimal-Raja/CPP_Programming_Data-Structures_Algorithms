// pair sum: return pair in sorted arry with target sum
#include <iostream>
using namespace std;
# include <vector>

int main(){
    int target = 9;
    vector<int>vec_index;
    vector<int>vec_values;
    vector<int>vec = {29,43,11,33,7,5,2};

    for(int i = 0; i<vec.size(); i++){
        for(int j = 0; j<vec.size();j++){
            if(target == (vec[i] + vec[j])){
                vec_index.push_back(j);
                vec_values.push_back(vec[j]);
            }
        }
    }
    cout<<"found values : "<<vec_values[1]<<" "<<vec_values[0]<<endl;
    cout<<"found at indicies: "<<vec_index[1]<<" "<<vec_index[0];
    return 0;
}