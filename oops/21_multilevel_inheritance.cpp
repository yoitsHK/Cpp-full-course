/*      Multilevel inheritance      */
//  Multilevel inheritance is when a class is derived from an other derived class

/*

    ->  Here we are creating 3 class using multilevel inheritance.
    ->  First class is student, second class is exam and third class is result.
    ->  here student class is acting as a base class for the exam class.
    ->  And the exam class is acting as the base class for the result class.
    ->  student-->exam-->result is the inheritance path.

*/

#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_num;
    public:
        void set_roll_num(int);
        void get_roll_num(void);
};
void student::set_roll_num(int n)
{
    roll_num=n;
}
void student::get_roll_num(void)
{
    cout<<"your roll no. - "<<roll_num<<endl;
}

class exam: public student
{
    protected:
        float maths;
        float physics;
        float chemistry;
    public:
        void set_marks(float,float,float);
        void get_marks(void);

};
void exam::set_marks(float m1,float m2,float m3)
{
    physics=m1;
    chemistry=m2;
    maths=m3;
}
void exam::get_marks(void)
{
    cout<<"your marks in physics are: "<<physics<<endl;
    cout<<"your marks in chemistry are: "<<chemistry<<endl;
    cout<<"your marks in maths are: "<<maths<<endl;
}

class result: public exam
{
    protected:
        float percentage;
    public:
        void display(void);
};
void result::display(void)
{
    get_roll_num();
    get_marks();
    cout<<"your result: "<<(physics+chemistry+maths)/3<<"%"<<endl;
} 
int main()
{
    result hk;
    hk.set_roll_num(006);
    hk.set_marks(96.69,69.96,99.99);
    hk.display();
    return 0;
}