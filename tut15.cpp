// OOPs- classes and objects
// c++--> initially called--> C with classes by stroustroup
//class--> extension of structure (in c) 
/*srteucture had limitations
        1: members aare public 
        2: no methods  */
//   classes = structures + more
//classes --> can have methods and properties
//classes --> can make few members as private & few as public
// structure in c++ are typedefed
//you can declare objects along with the class declaration
/* class employee{
         class defination
       } kashish ,kasif ,sadaf; */
// kashish.salary = 8 make no sense if salary if private

//Nesting of member functions
#include<iostream>
#include<string>
using namespace std;    //lec 22

    class binary{
        string s;
     public:
        void read(void);
        void chk_bin(void);
    };
    void binary :: read(void){
        cout<<"Enter a binary number"<<endl;
        cin>>s;
    }
    void binary :: chk_bin(void){
        for (int i = 0; i < s.length(); i++)
        {
            /* code */
            if (s.at(i)!= '0'&& s.at(i)!='1'){
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
        }
        
    }

    int main(){

        binary b;
        b.read();
        b.chk_bin();

    return 0;
}