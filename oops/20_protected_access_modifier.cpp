/*      Protected access modifier       */

//     Table
/*

                            |   Public derivation   |   Private Derivation  |   Protected derivation    |
                            |                       |                       |                           |  
    1.  Private members     |    not inherited      |    not inherited      |      not inherited        |
    2.  protected members   |     Protected         |     private           |        protected          |
    3.  public members      |     public            |     private           |        protected          |

*/

#include <iostream>
using namespace std;

class base
{
    private: 
        int a=11;
    protected:
        int b=22;
    public:
        int c=33;
        int get_a(void)
        {
            return a;
        }
        int get_b(void)
        {
            return b;
        }
        int get_c(void)
        {
            return c;
        }
};

class derived : protected base
{
    public:
        int res;
        void process(void)
        {
            res = get_a()+b+c; 
        }
        void display(void)
        {
            cout<<"sum = "<<res<<endl;
        }
        void get_data(void)
        {
            cout<<"a = "<<get_a()<<endl;
            cout<<"b = "<<get_b()<<endl;
            cout<<"c = "<<get_c()<<endl;
        }
};

int main()
{
    //  base class
    base obj1,obj2;

    //  trying to access the protected data of base calss
    // cout<<obj1.b<<endl;          //  it will give you an error

    int b = obj1.get_b();
    cout<<"accessing b from the public function of the class: \n"<<b<<endl;

    //  trying to access c of the base class
    cout<<obj1.c<<endl;
    //  changing value of the public variable in obj1
    obj1.c = 69;
    cout<<"After the change: "<<obj1.c<<endl;

    cout<<"value of c in base class for obj2 is: "<<obj2.c<<endl;

    //  Derived class
    derived k1;

    cout<<"Before calling the process function the value of res is: "<<k1.res<<endl;
    cout<<"Calling display function:: \n";
    k1.display();
    k1.process();
    cout<<"After calling the process function the value of res is: "<<k1.res<<endl;
    cout<<"Calling display function:: \n";
    k1.display();

    //  trying to change the value of 'c' which is the public member of the base class
/*
    cout<<"Before change: "<<k1.c<<endl; //  this won't work because c is now a protrcted member in derived class.
    k1.c = 27;
    cout<<"After change: "<<k1.c<<endl;
*/

    //  trying to access the get function defined in the public section of the base class
/*
    k1.get_a();
    k1.get_b();
    k1.get_c();
*/

    cout<<"Calling the get_data function to access the get function of base class:: \n";
    k1.get_data();

    return 0;
}