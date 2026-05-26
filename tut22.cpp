// lec 30
// parametized and default constructor 

#include<iostream>
using namespace std;

class complex{

    int a,b;

public: 

    complex (int , int );//constructor declaration 
  //complex (void);
    void printnumber()

    {
        cout<<"Your number is "<< a << " + " <<b<< " i " << endl;
    }

};

complex ::complex (int x, int y)// this is a paramrterized constructor , as it takes  parameters.
complex ::complex (void)// this is a default constructor , as it takes  no  parameters.
//default constructor khud run hogi int main me zyda funtion add nahi karna hoga 
{
    a=x;
    b=y; 
  //a=10;
  //b=0;
}
int main (){
    //implicit call
    complex a( 4 , 6);

    //explicit call
    complex b = complex (5, 7);
    a.printnumber();
    b.printnumber();

    //complex a;
  // a.printnumber();
   

    return 0;
}