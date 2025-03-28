# include <iostream>
using namespace std;

int binaryToDecimal(int binary){
    int power = 1, decimal =0;

    while (binary>0){
        int rem = binary%10;
        decimal += (rem*power);
        

        // update
        binary /=10;
        power *=2;
    }
    
    return decimal;
}

int main(){

    int binary;
    cout<<"Enter binary  number you want to convert it into decimal: ";
    cin>>binary;

    cout<<binaryToDecimal(binary);
    return 0;
}