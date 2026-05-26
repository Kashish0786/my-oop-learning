//lec 24 at  12:09 min 
// ye sirf class se hi run ho jaayega no need of object
// this is static function
#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;
public:
     void setdata(void)
     {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
     }
    void getdata(void)
    {
        
        cout<<"The id of this employee is"<<id<<" and this is employee number"
        <<count<<endl;
    }

     static void getcount(void){
        //cout<<id; // give error , ek static function ko dusre hi static function ya static variable ka access hota h 
        cout<<"The value of count is"<<count<<endl;
     }
};

int employee::count=1000;

int main (){
    
    employee kashish, kasif, sadaf;

   kashish.setdata();
   kashish.getdata();
   employee::getcount();

   kasif.setdata();
   kasif.getdata();
   employee::getcount();


   sadaf.setdata();
   sadaf.getdata();
   employee::getcount();

    return 0;
}