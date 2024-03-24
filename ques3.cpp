/*Given a decimal number as input, we need to write a program to convert the given decimal
number into its equivalent binary number.*/

#include<iostream>
using namespace std;

int decToBInNo(int decimalNo)  {       
   // base case
   if (decimalNo == 0) return 0;
   // recursive case
   else return (decimalNo % 2 + 10 * decToBInNo(decimalNo / 2));    
   
}


/*Driver code*/
int main()  {
int n;
cin>>n;
cout<<decToBInNo(n);
   return 0;
}
