/*      Ambiguity resolution in inheritance     */

/*

    In multiple inheritances, when one class is derived from two or more classes then there may be
    a possibility that the base classes have function with same name, and derived class may not have
    that funtion with that name. So if derived class object needs to call that funtion then the complier
    gets confused abouth which base's class member function should be called.

*/

//  To resolve the abiguity scope resolution operator is used denoted by "::"

//  syntax:
/*
    objectName.className::funtionName();
*/


#include <iostream>
using namespace std;

class base1
{
    public:
        void say(void)
        {
            cout<<"How are you?"<<endl;
        }
};

class base2
{
    public:
        void say(void)
        {
            cout<<"to kase hai aap log?"<<endl;
        }
};
// method 1 (for this you have to write it like that in public)
class derived: public base1, public base2
{
    public:
        void say()
        {
            base1::say();
        }

};
int main()
{
    base1 b1;
    base2 b2;
    derived d1;

    b1.say();
    b2.say();
    d1.say();

    //  method 2    (for this you don't have to write it down in the derived class)
    d1.base2::say();
    return 0;
}