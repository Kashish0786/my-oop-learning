//lec 33
//dynamic initialization of objects using constructor
// everytime watch this lecture from 16:00 min 
#include<iostream>
using namespace std;

class Bankdeposit{
    int Principal;
    int years;
    float intrestrate;
    float returnvalue;

    public:
      Bankdeposit(){}
      Bankdeposit( int p, int y, float r);// r can be value like 0.04
      Bankdeposit( int p, int y, int r);// r can be value like 13
      void show();
};
Bankdeposit :: Bankdeposit( int p, int y ,float r)
{
    Principal = p;
    years = y;
    intrestrate = r;
    returnvalue = Principal;
    for( int  i = 0; i < y; i++)
    {
        /* code */
        returnvalue = returnvalue *(1+r);
    }
    
}

Bankdeposit:: Bankdeposit( int p, int y ,int r)
{
    Principal = p;
    years = y;
    intrestrate = float(r)/100;
    returnvalue = Principal;
    for( int  i = 0; i < y; i++)
    {
        /* code */
        returnvalue = returnvalue *(1+r);
    }
    
}

 void Bankdeposit :: show(){
    cout<<endl<<"Principal amount was"<<Principal<<"Return value after"<<years
    <<" years is " <<returnvalue<<endl;
}
int main (){
    
     Bankdeposit bd1 , bd2 ,bd3;
     int p , y;
     float r ;
     int R;

     cout<<"Enter the value of p y and r"<<endl;
     cin>>p>>y>>r;
     bd1 = Bankdeposit(p , y , r);
     bd1.show();

    return 0;
}