#include <iostream>
#include <iterator>
#include <utility>
using namespace std;

void reverseArray(int* values, size_t size) {
    if (size == 0) return;
    size_t left = 0, right = size - 1;
    while (left < right) swap(values[left++], values[right--]);
}

int main() {
    int values[] = {1, 2, 3, 4, 5, 6};
    reverseArray(values, std::size(values));
    for (int value : values) cout << value << " ";
    cout << "\n";
}
