// lec 34 , copy constructor: make the copy of another object
#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number()// default constructor agar nahi likhenge to error aayega
        {
        a = 10; // if we not put this then it will show the garbage value of x, & y 

        }
        Number ( int num)
        {

            a = num;

        }
       /* Number (Number  &obj)
//when no copy const. is found , compiler supplies its own copy const.
// if we not put copy concst then it will also run and not show error.
        {
            cout<<"Copy constructor called"<<endl;
            a = obj.a;

        } */
        
    void display(){
        cout<<"The number for this object is "<< a <<endl;

    }

};

int main (){
    
    Number x ,y , z(45) , z2 ;
    x.display();
    y.display();
    z.display();
    
    Number z1(z);// copy const. invoked 
    z1.display();
    z2 = z;// copy const. not called in =

    z2 = x;
    z2.display();

    Number z3 = z;// copy const. invoked
    z3.display();

    return 0;
}