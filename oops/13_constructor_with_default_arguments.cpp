/*      Constructor with default arguments      */

#include <iostream>
using namespace std;

class simple
{
    private:
        int data1,data2,data3;
    public:
        simple(int,int,int);
        void display(void)
        {
            cout<<"The value of data1, data2 and data3 is:: "<<data1<<", "<<data2<<" and "<<data3<<endl;
        }
};

simple::simple(int a,int b=69,int c=69)  // always put default arguments from the right side!
{
    data1=a;
    data2=b;
    data3=c;
}

int main()
{
    simple s1 = simple(12,999);
    s1.display();
    return 0;
}