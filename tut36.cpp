//lec 45
//example of virtual base 

#include<iostream>
using namespace std;
/*

student--> test 
student--> sports
test-->result
sports-->result

*/
class student {
    protected :
        int roll_no;
    public:
        void set_number(int a){
            roll_no =a;
        }
        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class test:virtual public student{
    protected:
         float maths,physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"Your result is here:"<<endl;
            cout<<" maths: " <<maths<<endl;
            cout<<"physics:" <<physics<<endl;
        }
};

class sports : virtual public student {
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score(void)
        {
            cout<<"Your PT score is "<<score<<endl;
        }
};

class result : public test, public sports 
{
    private:
        float total;
    public : 
        void display (void)
        {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }
};
int main (){

    result kashish;
    kashish.set_number(45);
    kashish.set_marks(4.8 , 5.9);
    kashish.set_score(5);
    kashish.display();
    
    return 0;
}