/*      Static Data Members & Methods in C++ OOPs       */

#include <iostream>
using namespace std;

class employee
{
    private:
        int id;
        // int count=0;             (in this case every object have its own count variable & it starts with 0)
        static int count;           //  dont't write static varibale inside the class write it outside of class
    public:
        void set_id(void);
        void get_id(void);
        static void get_count(void)
        {
            cout<<"Total Employee's:: "<<count<<endl;
        }
};

int employee::count;                //  Default value of static is zero
/*
        ->  The memory of the staic variable is associated with class and not with the objects
            while the other variables alloted new memory with new objects.
        ->  You can initilize value in count here but if you try to initilize it above it will
            throw an error.
*/

void employee::set_id(void)
{
    cout<<"Enter employee ID:: ";
    cin>>id;
    count++;
}

void employee::get_id(void)
{
    cout<<"Your Id:: "<<id<<endl;
}

int main()
{
    employee Harshit,Maan,Aman,Tanu;
    
    Harshit.set_id();
    Harshit.get_id();
    employee::get_count();
    Maan.set_id();
    Maan.get_id();
    employee::get_count();
    Aman.set_id();
    Aman.get_id();
    employee::get_count();
    Tanu.set_id();
    Tanu.get_id();
    employee::get_count();



    /*
            ->  Here Harshit, Maan, Aman, Tanu will share the same count varibale.
    */
    return 0;
}       