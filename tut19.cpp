//lec 26  friend function
#include<iostream>
using namespace std;

/*complex number : 1+ 4i
                   5+8i
                  =6+12i*/
//here sumcomplex and class complex both are friends so, if we not mention frient complex in the private then it will show error
// friend function se bas sumcomplex ko class complex ka private data access karne ki permission milti hai 
    class complex{
        int a,b;
        public:
        void setnumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        friend complex sumcomplex( complex o1, complex o2);
        void printnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
    };

     complex sumcomplex(complex o1, complex o2){
        complex o3;
        o3.setnumber((o1.a + o2.a ), (o1.b + o2.b ));
        return o3;
     }

    int main(){
        complex c1, c2, sum;
        c1.setnumber(1,4);
        c2.setnumber(5,8);
        c1.printnumber();
        c2.printnumber();
        
        sum=sumcomplex(c1 ,c2);
        sum.printnumber();
    return 0;
}
/*
properties of friend function
1: not in the scope of calss // this function is not a part of class complex , here only private data is accessable 
to  sum complex.
2: since it is not in the scope pf the calss , it cannot be called from the object of that class.
3: can be involved without the help of any object.
4: usually contains the  object  as arguments .
5: can be declare inside public or private section of the class.
6: it cannot access the members directly by the names and need object_name.member_name 
to access any member.

 */