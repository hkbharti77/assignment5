/*Given a number n, check whether it's a prime number or not using recursion.*/


#include<iostream>
using namespace std;

bool isPrime(int n, int i){
    // base case
    if(n<=2) return (n==2) ?  true : false ;  //Returning true for the only even prime number which is 2
    
    if(n%i == 0) return false;   //If n is divisible by any number from 2 to
    if(i*i > n) return true;     
    //Recursively calling the function
    //with incremented value of 'i'
    return isPrime(n,i+1);
}

int main() {
    int n;
    cin>>n;
    if(isPrime(n,2)) cout<<"YES";
    else cout<<"NO";
    return 0;
}