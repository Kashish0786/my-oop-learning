//lec 35
// destructor;never takes an argument nor it return any value
#include<iostream>
using namespace std;

int count = 0;// global variable
class num { 
    public:
    num(){ // constructor num()
          count++;
          cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }

    ~num(){ // destructor ~num()
          cout<<"This is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main (){
    
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
         cout<<"Entering this block"<<endl;
         cout<<"Creating two more objects"<<endl;
         num n2 , n3;
         cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl; 
    return 0;
}
/*jab object banega then constructor call hoga aur jaise hi compiler ko
 mlm hoga ki object ka koi kaam nahi h thrn destructor call hoga ex; 
 block me num 2,3 phele const. hoga then destruct. hoga
  */