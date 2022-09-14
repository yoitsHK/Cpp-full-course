/*      Exercise on inheritance     */

#include <iostream>
using namespace std;

class simple
{
    protected:
        int a,b,res;
    public:
        void add(void)
        {
            res=a+b;
        } 
        void dif(void)
        {
            res=a-b;
        }
        void mul(void)
        {
            res=a*b;
        }
        void div(void)
        {
            res=a/b;
        }
};

class scientfic
{
    protected:
        int n,res2;
    public:
        void square(void)
        {
            res2=n*n;
        }
        void cube(void)
        {
            res2=n*n*n;
        }
};

class hybrid: public simple, public scientfic
{
    public:
        void set1(int n1,int n2)
        {
            a=n1;
            b=n2;
        }
        void set2(int n1)
        {
            n=n1;
        }
        void get1(void)
        {
            cout<<"result: "<<res<<endl;
        }
        void get2(void)
        {
            cout<<"result: "<<res2<<endl;
        }
};

int main()
{
    hybrid calci;
    calci.set1(69,1);
    calci.add();
    calci.get1();

    calci.set2(3);
    calci.cube();
    calci.get2();
    return 0;
}