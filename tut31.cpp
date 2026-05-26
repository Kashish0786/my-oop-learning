//lec 39
//protected access modifier
#include<iostream>
using namespace std;

class Base {
    protected: //it is also privte but it can be ineherit
        int a;
    private:
        int b;

};

/*
for a protected member :
                            public derivation    private derivation      protected derivation 
   1. private members           not                 not inherit             not inherit
   2. protected members         protected           private                 protected
   3. public members            public              private                 protected 
*/

class Derived :  protected Base {


};
int main (){
    Base b;
    Derived d;
   // cout<<d.a;//will not work since a is protected in both base as well as derived 
    return 0;
}