/*      Function overloading        */
#include <iostream>
using namespace std;

//  volume of cube
int volume(int a)
{
    return (a*a*a);
}

//  volume of cuboid
int volume(int l, int b, int h)
{
    return (l*b*h);
}

//  volume of cylender
float volume(double r, int h)
{
    return (3.14*r*r*h);
}

int main()
{
    cout<<"The volume of cube is:: "<<volume(3)<<endl;
    cout<<"The volume of cuboid is:: "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylender is:: "<<volume(3,6)<<endl;

    return 0;
}