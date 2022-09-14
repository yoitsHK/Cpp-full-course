/*      Pointers        */
#include <iostream>
using namespace std;

int main()
{
    int a = 69;
    int* ptr = &a;
    /*  
        * --> Dereference operator
        & --> (Address of) operator
    */
   cout<<"The address of a is:: "<<&a<<endl;
   cout<<"The value stored in ptr is:: "<<ptr<<endl;
   cout<<"The value of a access through ptr is:: "<<*ptr<<endl;

   //   Pointer to pointer
   int** ptr_to_ptr;
   ptr_to_ptr = &ptr;
   cout<<"The address of ptr is:: "<<&ptr<<endl;
   cout<<"The address of ptr is:: "<<ptr_to_ptr<<endl;
   cout<<"The value of ptr is:: "<<*ptr_to_ptr<<endl;
   cout<<"The value at address of ptr is:: "<<**ptr_to_ptr<<endl;

   return 0;
}