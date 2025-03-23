# include <iostream>
using namespace std;

int main(){

    bool isPrime = true;
    int n;
    cout<<"Enter value of N: ";
    cin>>n;

    for(int i=2; i<=n; i++){
        if(n%i ==0){
            isPrime = false;
            break;
        }
        else{
            isPrime = true;
        }
    }

    // if(!isPrime)
    if(isPrime =true){
        cout<<"it is a Prime number";
    }
    else{
        cout<<"it is not a prime number";
    }

    return 0;
}