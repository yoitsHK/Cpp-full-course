/*      Constructors        */

/*

    ->  Constructor is a special member function with the same name as of the class.
    ->  It is used to initialize the object of its class.
    ->  It is automatically invoked whenever an object is created.
    ->  The constructor with no parameters is called default constructor.
    ->  It shoud be decleared in public section of the class.
    ->  They can't return values and do not have retrun type.
    ->  A class can have multiple constructor.

*/


#include <iostream>
using namespace std;

class A
{
    private:
        int a,b;
    public:
        void display(void);
        A(void);                //  constructor declaration
};
void A::display(void)
{
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
A::A(void)
{
    cout<<"Enter value of a:: ";cin>>a;
    cout<<"Enter value in b:: ";cin>>b;
}
int main()
{
    A ob1, ob2;
    ob1.display();
    ob2.display();
    return 0;
}