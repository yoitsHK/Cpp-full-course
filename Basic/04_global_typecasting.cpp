#include<iostream>
using namespace std;

int sum = 69;             //  This sum is a global variable!
int main()
{
    int x,y;
    cout<<"Enter two values:"<<endl;
    cin>>x>>y;
    int sum = x+y;
    cout<<"This is calculated and local value of sum = "<<sum<<endl;
    //  For printing the value of global varianle
    cout<<"This is a global value - "<<::sum<<endl;
    
    /*      ************* Typecasting *************     */
    int ch = 65;
    cout<<"int to char: "<<(char)ch;
    cout<<"int to char: "<<char(ch);
    return 0;
}