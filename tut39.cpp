//Lec 49
//initialization list in constructors in cpp

/*
SYNTAX  for INITIALIZATION list in CONSTRUCTOR:
constructor ( argument-list): initialization-section
{
    assignment + other code ;
}

example
class test {
int a;
int b;
public:
    test (int i, int j) : a(i) , b(j) {constructor-body}
};
*/
#include<iostream>
using namespace std;

class Test 
{
    int a;//a declared first then also initialize first
    int b;

public:
     // Test (int i, int j) : a(i) , b(j)
    //Test (int i, int j) : a(i) , b(i+j)
    //Test (int i, int j) : a(i) , b(i*j)
    //Test (int i, int j) : a(i) , b(a+j)
    Test (int i, int j) : b(j) , a(i+b)/* show garbage value  coz a will be initialized first 
                                           because we have declared it first. */
     {
        cout<<"constructor executed"<<endl;
        cout<<"Value of a is " <<a<<endl;
        cout<<"Value of b is " <<b<<endl;
     }
        
};
int main (){

    Test t(4,6);
    
    return 0;
}