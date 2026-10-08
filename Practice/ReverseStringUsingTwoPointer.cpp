#include <iostream>
#include <string>
#include <utility>
using namespace std;

void reverseString(string& text) {
    if (text.empty()) return;
    size_t left = 0, right = text.size() - 1;
    while (left < right) swap(text[left++], text[right--]);
}

int main() {
    string text = "HELLO";
    reverseString(text);
    cout << text << "\n";
}
