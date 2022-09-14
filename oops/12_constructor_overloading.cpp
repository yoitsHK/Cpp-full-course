/*      constructor overloading     */

#include <iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:
        void display(void);
        complex(void)           //  Default constructor
        {
            a=0;b=0;
        }
        complex(int n1)         //  parameterized constructor 
        {
            a=n1;b=0;
        }
        complex(int n1,int n2)
        {
            a=n1;b=n2;
        }
};

void complex::display(void)
{
    cout<<"the complex no. is: "<<a<<"+"<<b<<"i"<<endl;
}

int main()
{
    complex c1;
    complex c2(69);
    complex c3(69,85);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}