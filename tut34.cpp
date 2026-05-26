//lec 42

/*

Create 2 classes:

    1.simple calculator---> takes input of 2 numbers using utility function and perform +,-,*,/
    and display the result using another function .

    2.scientific calculator--->takes input of 2 numbers using utility function and perform any 
    four scientific operation of your choice and display the result using another function .

Create another class hybridcalculator and inherit it using these 2 classes:

    Q1. what type of inheritence are you using?
    Q2. which mode of inheritence are you using?
    Q3. create an object of hybridcalculator and display results of simple and scientific calculator.
    Q4. how is code reusability implemented?

*/

//Lec 43
//Ambiguity resolution in inheritence

#include<iostream>
using namespace std;

class base1 {
    public:
    greet()
    {
        cout<<"hello kashish"<<endl;
    }
};

class base2 {
    public:
    greet()
    {
        cout<<"hello my beautiful kashish"<<endl;
    }
};

class derived:public base1{
    int a;
   public://here we declared the ambiguous resolution
        greet(){
            base1::greet();
        }

};
int main (){

    base1 base1obj;
    base1obj.greet();
    base2 base2obj;
    base2obj.greet();

     derived d;
     d.greet();//it will show ambiguous error so  we have to declare it on derived class (mtlb hame konsa class base chahiye)
    
    return 0;
}