/*      Inheritance syntax & visibility mode        */

//  Drived class syntax
/*

    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        class member/methods/etc...
    };

*/

/*

    ->  There are two types of visibility modes private & piblic.
    ->  Default visibility mode is private.
    ->  Public Visibility mode: Public members of the class becomes public members of the class.
    ->  Private visibility mode: Public members of the class becomes private members of the class.
    ->  Private members can never be inherited.

*/

#include <iostream>
using namespace std;

//  Base class
class A
{
    private:
        int Data;
    public:
        int id=69;
        void display(void)
        {
            cout<<"Data = "<<Data<<endl<<"Id: "<<id<<endl;
        }
        A(){}       //  Remember the default constructor 
        A(int n)
        {
            Data=n;
        }
};

//  privately inherited Derived class
class B : A
{
    public:
        B(){}
        B(int n)
        {
            id = n;
        }
        void get(void)
        {
            cout<<"Id: "<<id<<endl;
        }
};

int main()
{
    A obj1,obj2;

    obj1 = A(85);
    obj2 = A(22);
    cout<<"For class A:: \n";
    obj1.display();
    obj2.display();
    cout<<"Updating id of class A for obj1:: \n";
    obj1.id = 96;
    obj1.display();

    //  derived class
    B o1,o2;
    cout<<"setting derived class B:: \n";
    o1 = B(999);
    cout<<"Id calling through the derived class:: "<<endl;
    o1.get();
    cout<<"If the visibility mode is public then \n";
    // cout<<"Calling id by the derived class: "<<o1.id<<" and "<<o2.id<<endl;
    return 0;
}

/*

    ->  Here if the visibility mode is private the the public members of the class A will becomes the
        private members of the derived class B.
    ->  There is no way you can access the private members of any base class.  

*/