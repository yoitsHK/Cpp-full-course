/*      Arrays & Memory allocation in classes        */

#include <iostream>
#define MAX 100
using namespace std;
class shop
{
    private:
        int itemID[MAX];
        int itemPrice[MAX];
        int counter;
    public:
        void initCounter(void)
        {
            counter = 0;
        }
        void setPrice(void);
        void display(void);
};

void shop::setPrice(void)
{
    cout<<"Enter the Id of item "<<counter+1<<" is:: ";
    cin>>itemID[counter];
    cout<<"Enter price of item"<<counter+1<<":: ";
    cin>>itemPrice[counter];
    counter++;
}

void shop::display(void)
{
    for (int i=0;i<counter;i++)
    {
        cout<<"Item "<<i+1<<" Id "<<itemID[i]<<" is of $"<<itemPrice[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of items:: ";
    cin>>n;
    shop target;
    target.initCounter();
    for (int i=0;i<n;i++)
        target.setPrice();
    target.display();
    return 0;
}