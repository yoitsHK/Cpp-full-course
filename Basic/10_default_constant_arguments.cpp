/*      Default arguments & constant arguments       */
#include <iostream>
using namespace std;

float paisa_double_25din(int current_money , float factor = 1.5f)       //  remember to put pre-determine paramete
{                                                                       //  in the right side!
    return current_money*factor;
}

/*      constant arguments      */
int strlen(const char* ch)
{
    /*
        This is used so that no one can change the value by mistake.
    */
}

int main()
{
    int money;
    cout<<"Enter your balance:: ";
    cin>>money;
    //  if you don't pass value for predetermine argument then it will take the default value
    cout<<"For your balcnce "<<money<<", you will recieve "<<paisa_double_25din(money)<<" after 1 year."<<endl;    
    //  here passing value in the pre determine argument will replace it with new value
    cout<<"For VIPs balcnce "<<money<<", will recieve "<<paisa_double_25din(money,2.0)<<" after 1 year."<<endl;    
    return 0;
}