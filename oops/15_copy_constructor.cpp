/*      copy constructor        */

#include <iostream>
using namespace std;

class number
{
    int data;
    public:
        void display(void)
        {
            cout<<"The number is :: "<<data<<endl;
        }
        number(){}              //  default constructor
        number(int n1)
        {
            data=n1;
        }
        number(number &obj)     //  copy constructor   
        {
            cout<<"copy constructor calling...."<<endl;
            data=obj.data;
        }
};

int main()
{
    number n1,n2(85),n4;

    n1 = number(69);
    cout<<"For n1 ";   
    n1.display();
    cout<<"For n2 ";
    n2.display();

    number n3(n2);      //  copy constructor invoked 
    cout<<"For n3 ";
    n3.display();

    n4 = n1;            // copy constructor will not invoked 
    cout<<"For n4 ";
    n4.display();

    number n5 = n1;
    cout<<"For n5 ";   
    n5.display();

    return 0;
}

/*
    ->  When no copy constructor is found, compiler supplies its own copy constructor!
*/