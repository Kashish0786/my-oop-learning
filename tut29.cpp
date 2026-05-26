//lec 36
// inheritance
/*
1: OOPs -----> inheritance.
2:conceopt of reusability in c++ is supported using inheritance .
3:the existing class called base class.
4:the new class called derived class (ex. employee(Bc) --> programme(Dc)).
5:reusing classes saves time and money .

TYPES OF INHERITENCE

*single inheritance -->a derived class with only one base class.( 1 papa , 1 child )
*multiple inhhe-->a derived class with more than one base class.( 2 papa , 1 child ) 
*hierarchical inhe-->several derived classes from a single base class.( 1 papa , 2 child)
*multilevel inher-->deriving a class from already derived class.{A( animal )-->B (mammal)-->C (cow) }
      mammal= animal + more.... , cow = mammal + more....
*hybrid inher-->a combination of multiple and multilevel inher.          A(animal)
                                                                        |        |
                                                                        B(mamal) C(bird)
                                                                        |        |
                                                                           D(bat)  
*/

//hierarchical inher
#include<iostream>
using namespace std;
class Animal{
      public:
      void speak(){
            cout<<"this is Animal"<<endl;
      }
};
class Dog : public Animal{
      public:
      void walk(){
            cout<<"my dog walk"<<endl;
      }
};
class Cat : public Animal{
      public:
      void meow(){
            cout<<"my dog walk"<<endl;
      }
};
int main() {
      Dog myDog;
      Cat myCat;
      myDog.speak();
      myDog.walk();
      myCat.speak();
      myCat.meow();
      return 0;
}




