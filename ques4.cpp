/*Given the Binary code of a number as a decimal number, we need to convert this into its
equivalent Gray Code. In gray code, only one bit is changed in 2 consecutive numbers.*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int code(int n , int i)
{
    int a,b;
    int result =0;
    if(n!=0){
        //taking last digit
        a =n % 10;
        n = n/10;
       // taking second  last digit
       b= n % 10;
       //converting binary to gray code
      if((a & ~b) == 1|| (~a & b)==1 ){
      result = (int)(result + pow(10,i)) ;
      
      }
      return code(n,++i )+ result;
      }
     return  0;
}

    int main(){
        int n;
        cin>>n;
        cout<<code(n,0);
        return 0;
    }