/*      Inline functions        */
#include <iostream>
using namespace std;

/*
    -   inline function can't be used with static variables
    -   inline functions are used to reduce time complixicty of program
    -   inline function should be simple and it is called in the program too many times
*/
inline int product(int a, int b)
{
    return a*b;
}

int main()
{
    int x,y;
    cout<<"Enter the value of x and y:: "<<endl;
    cin>>x>>y;
    //  calling function too many times
    cout<<"product of x and y is:: "<<product(x,y);
    cout<<"product of x and y is:: "<<product(x,y);
    cout<<"product of x and y is:: "<<product(x,y);
    cout<<"product of x and y is:: "<<product(x,y);
    cout<<"product of x and y is:: "<<product(x,y);
    cout<<"product of x and y is:: "<<product(x,y);


    return 0;
}