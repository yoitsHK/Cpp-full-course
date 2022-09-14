/*      Manipulators        */
#include <iostream>
#include <iomanip>           //  for setw() manipulator
using namespace std;
int main()
{
    int a=1, b=200, c=3999;
    
    //      endl manipulator
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    
    //      setw() manipulator
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    
    return 0;
}