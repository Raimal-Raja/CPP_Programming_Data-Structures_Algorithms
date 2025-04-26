#include <iostream>
#include <algorithm>

using namespace std;

int maxWater(int height[], int n) {
    int maxWater = 0;
    int lp = 0, rp = n;
    while(lp<rp){
        int w = rp-lp;
        int ht = min(height[lp],height[rp]);
        int currWater =  w * ht;
        maxWater = max(maxWater, currWater);

        height[lp]<height[rp]? lp++:rp--;
    }
    return maxWater;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int ans = maxWater(height, n);
    cout << ans << endl;
    return 0;
}