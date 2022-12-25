/*
This program takes an integer as an input 
*/
#include <iostream>

using namespace std;
/*
isPrime function takes an integer
and return boolean reagrding whther it is prime number or not.
*/
bool isPrime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is prime."<<endl;
    }
    else{
        cout<<num<<" is not a prime."<<endl;
    }
    return 0;
}
