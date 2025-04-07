#include <iostream>
using namespace std;

int main() {
    int target = 5;
    int arr[] = {1, 2, 4, 5, 6, 90, 10, 444};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Found at index: " << i << endl;
            return 0;
        }
    }

    cout << "Not found!" << endl;
    return -1;
}
