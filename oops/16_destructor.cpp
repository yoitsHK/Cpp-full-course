/*      Destructor      */

/*

    ->  The destructor neither take any arugments not it returns any value.
    ->  To build a constructor in a class use '~' before a class name.
*/

#include <iostream>
using namespace std;

static int count;

class A
{
    public:
        //  constructor
        A()
        {
            count++;
            cout<<"This is the time the constructor is called by object: "<<count<<endl;
        }
        //  destructor 
        ~A()
        {
            cout<<"This is the time when destructor is called for object: "<<count<<endl;
            count--;
        }

};


int main()
{
    cout<<"Welcome to the main function!"<<endl;
    cout<<"Creating an object in the main function!"<<endl;
    A n1;
    {
        cout<<"Entering the block!"<<endl;
        cout<<"creating objects within the block!"<<endl;
        A o1,o2;
        cout<<"Exiting the block!"<<endl;
    }
    cout<<"Back to the main function!"<<endl;
    cout<<"Ending the program!"<<endl;
    return 0;
}