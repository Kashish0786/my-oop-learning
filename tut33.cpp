//lec 41 
//multiple inheritence deep dive 
#include<iostream>
using namespace std;

/* syntax 
class derived : visibility-mode base1, visisbility-mode base2
{
    class body of class "derivedC"
}*/

class base1 {
    protected:
        int base1int;
    public:
        void set_base1int(int a)
        {
            base1int = a;
        }
};

class base2 {
    protected:
        int base2int;
    public:
        void set_base2int(int a)
        {
            base2int = a;
        }
};

class derived : public base1 , public base2
{
    public:
        void show()
        {
            cout<<"The value of base1 is "<<base1int<<endl;
            cout<<"The value of base2 is "<<base2int<<endl;
            cout<<"The sum of these values is  "<<base1int + base2int <<endl;
        }
};
/*

The inherited derived class will look something like this:
        base1int -->protected
        base2int -->protected
Member functions:
        set_base1int()---> public   
        set_base2int()---> public  
        set_show ()---->public

*/
int main ()
{
     derived kashish;
     kashish.set_base1int(3);
     kashish.set_base2int(4);
     kashish.show();

return 0;
}