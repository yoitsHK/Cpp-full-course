/*      Classes     */

#include <iostream>
using namespace std;

class student
{
    private:
        int a,b,c;
    public:
        int x,y,z;
    
    //  Class functions
    void setData(int a1, int b1, int c1);           //  Declaration
    void getData()                                  //  function defined inside a class
    {
        cout<<"The value of a is:: "<<a<<endl;
        cout<<"The value of b is:: "<<b<<endl;
        cout<<"The value of c is:: "<<c<<endl;
        cout<<"The value of x is:: "<<x<<endl;
        cout<<"The value of y is:: "<<y<<endl;
        cout<<"The value of z is:: "<<z<<endl;
    }
};

void student::setData(int a1, int b1, int c1)     //  class function created outside of a class
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    student s1;             // 's1' is the object of 'student' class
  //s1.a = 69;              (This will throw error besause you can't access private data directly)
    s1.setData(10,20,33);   // but you can access through a function created within that class.
    s1.x = 85;
    s1.y = 75;
    s1.z = 55;
    s1.getData();
    return 0;
}