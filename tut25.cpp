//lec 32
// default argument
#include<iostream>
using namespace std;

class simple {
    int data1;
    int data2;
    public:
    simple( int a , int b=9){
        data1 =a; 
        data2 =b;
    }
    void printdata();
};

void simple :: printdata(){
    cout<<"The value of data "<<data1<<" and "<< data2 << endl;
}
int main (){
   // simple s(1,4); // humne upar b = 9 de rakha h isliye 
     simple s(1);
    s.printdata();
    return 0;
}