/*Given two numbers x and y find a product using recursion.*/

#include<iostream>
using namespace std;

int  fun(int a, int b){
    // base case
    if(b==0 ) return 0;
    // recursive case
    if(a<b) return fun(b,a);
    
    else   return (a+fun(a,b-1));
}    
int main(){
    int a,b;
    cin>>a>>b;
    
    cout<<fun(a,b);
    return 0;
}