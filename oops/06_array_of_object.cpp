/*      Array of object        */

/*
    #include <iostream>
    using namespace std;

    class emp
    {
        int id;
        int fee;
        public:
            void setid(void)
            {
                cout<<"Enter employee id:: ";
                cin>>id;
                fee = 1250;
            }
            void getid(void)
            {
                cout<<"your id is:: "<<id<<endl;
                cout<<"your salary is:: "<<fee<<endl;
            }
    };

    int main()
    {
        int n;
        cout<<"No. of emp? "<<endl;cin>>n;
        emp e1[n];
        for (int i = 0; i < n;  i++)
        {
            e1[i].setid();
            e1[i].getid();
        }
        return 0;
    }
*/

//      Complex number
#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    public:
        void setData(int x, int y)
        {
            a=x;
            b=y; 
        }
        void display(void)
        {
            cout<<"Your complex number is:: "<<a<<"+"<<b<<"i"<<endl;
        }
        void sum(complex o1, complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
};

int main()
{
    complex c1,c2,s;
    c1.setData(2,6);
    c1.display();
    c2.setData(1,3);
    c2.display();
    s.sum(c1,c2);
    cout<<"After performing sum::"<<endl;
    s.display();

    
    return 0;
}