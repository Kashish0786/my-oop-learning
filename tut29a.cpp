// lec 37 , inheritance
#include<iostream>
using namespace std;
//base class
class Employee{
    
    public:
    int id;
    float salary;
    Employee(int inpid){
        id = inpid;
        salary =34.0;
    }
    Employee(){}
};
//derived class syntax 
/*
        class derived-class -name :{{visibility-mode}} {{base-class-name}}
    {
           class members /methods , etc.
    }
NOTE: 
1. default visibility mode is private 
2.public visibility mode: public members of the base class becomes public members of the derived class.
3.private visibility mode: public members of the base class becomes private members of the derived class.
4.private members are never inheritance.

*/

//creating a programmer class derived from employee base class.

class Programmer : Employee{
    public:
    Programmer ( int inpid){
        id = inpid;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main (){
    Employee kashish(1), kasif(2);
    cout<<kashish.salary<<endl;
    cout<<kasif.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    skillF.getdata();
    return 0;
}
