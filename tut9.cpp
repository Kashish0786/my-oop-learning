/*#include<iostream>
using namespace std;

//RETURN VALUE FUNCTION

int sum(int a, int b){
    int c= a+b;
    return c;
}
int main (){
    int num1 , num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}*/


// FUNCTION PROTOTYPE
#include<iostream>
using namespace std;

int sum(int a, int b);// we have to declare this firstly
int main (){
    int num1 , num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    //num 1 and num 2 are actual parameters
   
    return 0;
}
int sum(int a, int b){
    //formal parameters a and b will be taking values from actual parameters num1 and num 2.
    int c= a+b;
    return c;
}/* it will show the error coz the sum is not declared first hence it is known asFUNCTION PROTOTYPE .
 to run this code firstly we have to declare the sum*/