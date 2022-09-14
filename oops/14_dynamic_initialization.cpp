/*      Dynamic Initialization of objects using constructor     */

/*

    #include <iostream>
    using namespace std;

    class A
    {
        int data;
        public:
            A(void){}       //  always initialize a void constructor like if you don't want a error
            A(int n)
            {
                data=n;
            }
            void display()
            {
                cout<<"data = "<<data<<endl;
            }
    };

    int main()
    {
        //  if you are declaring the class objects like this then line no. 9 is important!
        A d1,d2;
        d1 = A(69);
        d1.display();
        return 0;
    }   

*/



#include <iostream>
using namespace std;

class bankdepo
{
    int principal;
    int year;
    float rate;
    int return_value;

    public:
        bankdepo(){}            //  default constructor
        bankdepo(int p,int y,int r);
        bankdepo(int p,int y,float r);
        void display(void);
};

bankdepo::bankdepo(int p,int y,int r)
{
    principal=p;
    year=y;
    rate=float(r)/100;
    return_value=principal;
    for(int i=0;i<year;i++)
    {
        return_value = return_value * (1+rate);
    }
}
bankdepo::bankdepo(int p,int y,float r)
{
    principal=p;
    year=y;
    rate=r;
    return_value=principal;
    for(int i=0;i<year;i++)
    {
        return_value = return_value * (1+rate);
    }
}

void bankdepo::display(void)
{
    cout<<"The principle amount is "<<principal
        <<". The return amount in "<<year
        <<" is : "<<return_value<<endl;
}

int main()
{
    bankdepo b1,b2,b3;

    b1 = bankdepo(1000,1,4);
    b1.display();

    b2 = bankdepo(100,1,0.04f);
    b2.display();

    b3.display();
    return 0;
}