#include<iostream>
using namespace std;
int main (){
    // what is pointer --- data type which holds the adress of other data types

    int a=3;
    int*b;
    b=&a;
    //&------> adress of operater
    //2nd code
    cout<<"\n The adress of a is "<<&a;
    cout<<"\n The adress of a is "<<b;

 //*----> derefrence of operator
    cout<<"\n The adress of  b is "<<*b;

    // pointre to pointer 
    int **c=&b;
    cout<<"\n The adress of b is "<<&b;
    cout<<"\n The adress of b is "<<c;
    cout<<"\n The value at adress c is "<<*c;
    cout<<" \n The value at adress value_at( value_at) (c) is "<<**c;

return 0;
}