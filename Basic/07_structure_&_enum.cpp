/*      enum & union        */
#include <iostream>
using namespace std;

union money                 //  define like structure
{
    int rupee;
    int doller;
    int pound;
};

int main()
{
    money m1;
    m1.rupee = 69;          // choose 1 at a time
    cout<<m1.rupee<<endl;    
    cout<<m1.doller<<endl;    
    cout<<m1.pound<<endl;   

    /*       enum       */
    enum time{moring, noon, night};
    cout<<moring<<endl;
    cout<<noon<<endl;
    cout<<night<<endl;
    time t1 = night;
    cout<<t1<<endl;
    return 0;
}