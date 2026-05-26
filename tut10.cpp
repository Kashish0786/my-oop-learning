#include<iostream>
using namespace std;

    int sum( int a, int b){
        int c=a+b;
        return c;
    }
    //call by refrence using pointers
    int swapPointer( int* a, int* b){
        int temp= *a;
        *a=*b;
       * b= temp;
    }
    //call by reference using c++ reference variable
     void swapRefrenceVar( int &a, int &b){
        int temp= a;
        a=b;
        b= temp;
    
   }
    //this will not swap a and b for swaping we have to use the pointer
    int main (){
        int a=4, b=5;
       // cout<<"The sum of 4 and 5 is "<< sum(a,b);
cout<<"The value of a is "<<a<<" and the value of b is"<<b<<endl;
//swap (a,b); will not swap a and b
//swapPointer(&a,&b); will swap a and b using pointer reference
 swapReferenceVar(a,b);//it will swap a and b using reference variable    
cout<<"The value of a is "<<a<<" and the value of b is"<<b<<endl;  

    return 0;
    }