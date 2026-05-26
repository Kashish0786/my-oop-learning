#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
      }
  return n* factorial(n-1);
}
// step by step clculation of 4
/*factorial(4)= 4* factorial(3);
factorial(4)= 4*3* factorial(2);
factorial(4)= 4*3*2* factorial(1);
factorial(4)= 4*3*2*1
factorial(4) = 24;*/

int main (){
    // recursion;function call by itself
    //factorial of a number 
    //6!=6*5*4*3*2*1=720
    // n! = n* (n-1)!
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
   cout<<"The factorial of "<<a<<" is"<< factorial(a)<<endl;  

    return 0;
}