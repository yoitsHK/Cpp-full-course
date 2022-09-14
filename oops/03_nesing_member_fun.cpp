/*      Nesting of member functions     */

/*
    //  Recape:-
        ->  Structure had limitations
                -  Members are public
                -  no Methods
        ->  Classes are structure and more
        ->  Classes can have methods and properties
        ->  Classes can make few members as private and few as public
        ->  Structure in C++ are typedefed
        ->  You can declare objects along with the class declaration like this:
                class Employee
                {
                    class definition
                } harry, rohan, sam;
        ->  You can't set data in private variables
                
*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
        string s;
        int flag = 0;
        void chk_bin(void);
    public:
        void read(void);
        void ones_compliment(void);
        void display(void);
};

void binary::read(void)
{
    cout<<"Enter a binary number:: ";
    cin>>s;
}

void binary::chk_bin(void)
{
    for (int i=0;i<s.length();i++)                          //  .length is a bulit in function for string length
    {                                                       //  s.at(i) will work as s[i]
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format!"<<endl;
            flag = 1;
            exit(0);
        }
    }
    if (flag!=1)
    {
        cout<<"Correct binary format!"<<endl;
    }
}

void binary::ones_compliment(void)
{
    chk_bin();                                                  //  nested member function
    if (flag!=1)
    {
        for (int i=0;i<s.length();i++)
        {
            if (s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else
            {
                s.at(i)='0';
            }
        }
    }
}

void binary::display(void)
{
    if (flag!=1)
    {
        cout<<"Displaying your binary number:: "<<s<<endl;

    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();                        // due to nested of member function
    b.ones_compliment();
    b.display();
    return 0;
}