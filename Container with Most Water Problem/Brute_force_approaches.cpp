#include <iostream>
#include <algorithm>

using namespace std;

int maxWater(int arr[], int n) {
    int maxWater = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int width = j - i;
            int height = min(arr[i], arr[j]);
            int currentWater = width * height;
            maxWater = max(maxWater, currentWater);
        }
    }
    return maxWater;
}

int main() {
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size in main
    int ans = maxWater(arr, n);
    cout << ans << endl;
    return 0;
}