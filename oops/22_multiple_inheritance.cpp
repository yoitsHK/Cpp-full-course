/*      Multiple inheritance        */

//  A derived class with more than one base class

/*

    class derived class: visibility-mode base1, visivility-mode base2
    {
        class body of derived mode
    }; 

*/

#include <iostream>
using namespace std;

class base1
{
    protected:
        int data1;
    public:
        void set1(int n)
        {
            data1=n;
        }
};

class base2
{
    protected:
        int data2; 
    public:
        void set2(int n)
        {
            data2=n;
        }
};

class derived: public base1, public base2
{
    protected:
        int data3;
    public:
        void show(void);

};
void derived::show(void)
{
    cout<<"The data in base 1 is: "<<data1<<endl;
    cout<<"The data in base 2 is: "<<data2<<endl;
    cout<<"The data in derived class is: "<<data1+data2<<endl;
}

int main()
{
    derived hk;
    hk.set1(69);    
    hk.set2(1);
    hk.show();    
    return 0;
}