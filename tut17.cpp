// static data member in classes 
//lec 24
//static variable 0 se hi initialize hota hai
#include<iostream>
using namespace std;
// count is the static member of class employee
class employee{
    int id;
    static int count; //  here we declare static variable  // agar yaha count = 1000 karenge to error show karega 
    // int count;
public:
    void setdata(void){
    cout<<"Enter the id"<<endl;
    cin>>id;
    count++; // ise hatayenge int count me 
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id /*if we take int count then take till<< id;*/
        << " and this is employee number"<< count << endl;
    }
};

int employee:: count; /* static variable , agar hame SV ko 1000 se initialize karwana h to
 yaha count= 1000; kar denge then code run h jaayega*/ 
int main (){

    employee kashish , kasif , sadaf;
   // kashish.id=1;
   // kashish.count=1; can'nt do coz id and count are private

   kashish.setdata();
   kashish.getdata();

   kasif.setdata();
   kasif.getdata();

   sadaf.setdata();
   sadaf.getdata();

   return 0;
}

/* 1 static variable ko class ke bahar mention karte hai
   2 int count ke output me sirf id btata h ,  the id of this employee is 2  Enter the id 
    yaha sirf employee ka id bataya jata h 
   3 static int count me employee ka no. bhi batata h aur id bhi like kashish , kasif then employee id 1 and employee no.1
   , employee id 2 and employee no.2
   4 agar int count lenge to har ek object ka apna ek count hoga aur hum ek object se dusre object me count pass
    nahikarwa sakte is problem ko  static variable solve karta hai
    */