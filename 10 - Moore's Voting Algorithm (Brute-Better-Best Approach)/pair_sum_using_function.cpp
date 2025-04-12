// pair sum: return pair in sorted arry with target sum
#include <iostream>
using namespace std;
# include <vector>

vector<int>pairSum(vector<int>vec,int target){
    int n = vec.size();
    vector<int>ans;

    for(int i = 0; i<vec.size(); i++){
        for(int j = 0; j<vec.size();j++){
            if(target == (vec[i] + vec[j])){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                
            }
        }
    }
   
}


int main(){
    int target = 9;
    vector<int>vec = {29,43,11,33,7,5,2};
    vector<int>ans = pairSum(vec, target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}