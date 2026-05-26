//OOPS
//is se phele humne jitne bhi programming kare the wo project oriented the 
//now from here it is object oriented 
/*basic concepts of OOPs are 
CLASSES: basic template for creating objects.
OBJECTS: with the help of classes we make basic run time entities.
DATA ABSTRACT & ENCAPSULATION : wrapping data and function into single unit( capsule ke andar data and function daal do).
INHERITANCE: properties of one class be inherited into others.
POLYMORPHISM: ability to take more than one forms(example ; function overloading).
DYNAMIC BINDING : code which will execute is not known until the program runs.
MESSAGE PASSING :object.message (information) call fromat.*/

#include<iostream>
using namespace std;
//structure me hum variable kahi se bhi access kar sakte hai 
//structure me hum functions nahi daal sakte hai thats why we use class
//class is more secure than structure
class employee
{
    private:
          int a,b,c; 
    public:      
          int d,e;
          void setData(int a1, int b1, int c1); //declaration
          void getData(){
          cout<<"The value of a is "<<a<<endl;
          cout<<"The value of b is "<<b<<endl;
          cout<<"The value of c is "<<c<<endl;
          cout<<"The value of d is "<<d<<endl;
          cout<<"The value of e is "<<e<<endl;
          }
};

void employee :: setData(int a1, int b1, int c1 ){
     a=a1;
     b=b1;
     c=c1;
}
int main (){
    employee kashish;
    //kashish.a=23; this will show error coz it is private
    kashish.d=44; // this is public isliye no erroe will shown
    kashish.e=22;
    kashish.setData(1,2,4);
    kashish.getData();
     return 0;
}