#include <iostream>

int main()
{
    int num1, num2;
    std::cout<<"Enter two values"<<std::endl;     //  '<<' this is Insertion operator
    std::cin>>num1>>num2;                    //  '>>' this is Extraction operator
    std::cout<<"num1 = "<<num1<<std::endl<<"num2 = "<<num2<<std::endl;
    return 0;
}