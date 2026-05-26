//lec 40
//multilevel inheritence 
#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student :: set_roll_number(int r)
{
    roll_number = r;
    
}

void student :: get_roll_number()
{
    cout<<"The roll number is "<<roll_number <<endl;
}

class exam :public student
{
protected:
    float maths;
    float physics;
public:
    void set_marks(float , float);
    void get_marks(void);

};

void exam :: set_marks(float m1 , float m2)
{
    maths = m1;
    physics = m2;

}

void exam :: get_marks()
{
    cout<<"The marks obtained in maths is "<<maths<<endl;
    cout<<"The marks obtained in physics is "<<physics<<endl;

}

class result: public exam
{
    float percentage;
    public:
        void display_result()
{
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths + physics)/2<<endl;
}

};
int main ()
{
    /*

    NOTES:
        if we are inheriting Bfrom A and Cfeom B :[A--->B--->C]
        1. A is the base class for B and B is the base class for c 
        2. A--->B--->C is called inheritence path.
    
    */
    result kashish;

    kashish.set_roll_number(420);

    kashish.set_marks(94.0 , 90.0);

    kashish.display_result();

    return 0;
    
}