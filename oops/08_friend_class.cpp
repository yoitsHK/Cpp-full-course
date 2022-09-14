/*      friend classes & member freind functions        */
#include <iostream>
using namespace std;

//  forward declaration
class complex;

class calculator
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        int sum_real(complex,complex);
        int sum_img(complex,complex);
};

class complex
{
    int a,b;
    //  Individual declaring functions as friends
    friend int calculator::sum_real(complex,complex);
    friend int calculator::sum_img(complex,complex);
    //  Aliter: Declaring whole class as friend
    /*
        ->  friend class calculator;
    */
    public:
        void set(int n1,int n2)
        {
            a=n1;
            b=n2;
        }
        void print(void)
        {
            cout<<"Your complex no. "<<a<<"+"<<b<<"i"<<endl;
        }
};

int calculator::sum_real(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
int calculator::sum_img(complex o1,complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    complex o1,o2;
    o1.set(1,4);
    o2.set(5,7);
    calculator cal;
    int res_r = cal.sum_real(o1,o2);
    int res_i = cal.sum_img(o1,o2);
    cout<<"The sum of real part of o1 & o2 is:: "<<res_r<<endl;
    cout<<"The sum of real part of o1 & o2 is:: "<<res_i<<endl;
    return 0;
}