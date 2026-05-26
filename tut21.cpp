//lec 29
// constructor in c++ 

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

    /*creating a constructor: constructor is a special member function with  the same name as of the class. 
    it is automatically involved whenever an objec is created.
    it is used to initialize the object of its class. */

    complex (void);//constructor declaration
    void printnumber()

    {
        cout<<"Your number is "<< a << " + " <<b<< " i " << endl;
    }

};

complex ::complex (void)// this is a default constructor , as it takes no parameters.
{
    a=10;
    b=0; // yaha koi bhi code likhenge wo run ho jaayega 
//  cout<<"hello world";
}
int main (){

      complex c;
      c.printnumber();
    
    return 0;
}

/* 

    1: it should be declare in the public section of the class .
    2: they are automatically involved whenever the object is created .
    3: they cannot return values and do not have return types .
    4: It can have default arguments.
    4: we cannot refer to their adress.
    
*/