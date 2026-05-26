//Lec 48
//example of constructor in derived class
/*

CASE 1:
class B: public A 
{
    // order of execution of constru--> first A() then B()
};

CASE 2: 
class A: public B , public C 
{
    //order of execution of constructor ---> B() then C() then A()
};

CASE 3:
class A: public B , virtual public C 
{
    //order of execution of constructor --->C() then B() then A()
};

*/
#include<iostream>
using namespace std;

class base1{
    int data1;

    public:
        base1(int i){
            data1 = i;
            cout<<"base1 class constructor called"<<endl;
        }
        void printdatabase1(void){
            cout<<"The value of data1 is"<<data1<<endl;
        }
};

class base2{
    int data2;

    public:
        base2(int i){
            data2 = i;
            cout<<"base2 class constructor called"<<endl;
        }
        void printdatabase2(void){
            cout<<"The value of data2 is"<<data2<<endl;
        }
};

class derived:public base1 , public base2 {
    int derived1, derived2;
    public:
        derived( int a , int b , int c ,int d ):base1(a) , base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"derived class constructor called"<<endl;
        }
        void printdataderived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main (){

    derived kashish ( 1,2,3,4 );
    kashish.printdatabase1();
    kashish.printdatabase2();
    kashish.printdataderived();
    
    return 0;
}