/*      Call by reference using C++ reference variables     */
#include <iostream>
using namespace std;

void swap(int &,int &);

int & return_value(int &, int &);

int main()
{
    int x,y;
    cout<<"Enter the values::"<<endl<<"x = ";
    cin>>x;cout<<"y = ";cin>>y;
    swap(x,y);
    cout<<"After swap:: "<<endl<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    int m,n;
    cout<<"Enter the values::"<<endl<<"x = ";
    cin>>x;cout<<"y = ";cin>>y;
    return_value(x,y) = 69;
    cout<<"here x becomes "<<x<<endl<<"y = "<<y<<endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int & return_value(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}