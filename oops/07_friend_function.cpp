/*      Friend Function     */

/*
    // Properties of friend function
    
    1.  Friend function is not in the scope of class.
    2.  so, it can't be called from the object of that class.
    3.  It is simply a function that can access the private data of class in which it is declared.
    4.  It usually contains the object as arguments.
    5.  It can be declared inside private or public section of the class.

*/
#include <iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:
        void set(int x, int y);
        void get(void);
    friend complex sum(complex o1, complex o2);
};

//  Classs member function:-
void complex::set(int x, int y)
{
    a = x;
    b = y;
}
void complex::get(void)
{
    cout<<a<<"+"<<b<<"i"<<endl;
}

//  Class friend function:-
complex sum(complex o1, complex o2)
{
    complex o3;
    o3.set((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}


int main()
{
    complex c1,c2,s1;
    c1.set(1,9);
    c2.set(5,3);
    c1.get();
    c2.get();

    s1 = sum(c1,c2);
    s1.get();

    return 0;
}