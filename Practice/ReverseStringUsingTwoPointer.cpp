#include <iostream>
using namespace sdt;

void reverseString(char[] s){
    int l = 0; r.lenth -1;
    while(l<r){
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}

int main(){
    char []s = {'H', 'E', 'L', 'L', 'O'};

    cout<<reverseString(s);
}s