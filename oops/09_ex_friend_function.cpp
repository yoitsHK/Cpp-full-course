/*      Examples on friend function     */

//  example 1
/*
    #include <iostream>
    using namespace std;
    class B;
    class A
    {
        private:
            int Data;
        public:
            void setData(int n);
        friend int sum(A,B);
    };
    void A::setData(int n)
    {
        Data=n;
    }

    class B
    {
        private:
            int Data;
        public:
            void setData(int n);
        friend int sum(A,B);
    };
    void B::setData(int n)
    {
        Data=n;
    }

    int sum(A obj1,B obj2)
    {
        return obj1.Data+obj2.Data;
    }

    int main()
    {
        A obj1;
        B obj2;
        int n1,n2;
        
        cout<<"Enter data in class A:: ";
        cin>>n1;
        obj1.setData(n1);
        
        cout<<"Enter data in class B:: ";
        cin>>n2;
        obj2.setData(n2);
        
        int res = sum(obj1,obj2);
        cout<<"The sum of the data of both the classes is: "<<res<<endl;
        return 0;
    }
*/


//  example 2
/*
    #include <iostream>
    using namespace std;
    
    class B;
    class A
    {
        friend void swap(A &,B &);
        private:
            int Data;
        public:
            void setData(int n)
            {
                Data=n;
            }
            void display(void)
            {
                cout<<Data<<endl;
            }
    };
    class B
    {
        friend void swap(A &,B &);
        private:
            int Data;
        public:
            void setData(int n)
            {
                Data=n;
            }
            void display(void)
            {
                cout<<Data<<endl;
            }
    };

    void swap(A & obj1,B & obj2)
    {
        int temp;
        temp = obj1.Data;
        obj1.Data = obj2.Data;
        obj2.Data = temp;   
    }

    int main()
    {
        A o1;
        B o2;
        int n1,n2;
        //  seting data in class A
        cout<<"Enter data in class A:: ";
        cin>>n1;
        o1.setData(n1);
        //  seting data in class B
        cout<<"Enter data in class B:: ";
        cin>>n2;
        o2.setData(n2);
        //  Before swap
        cout<<"Before swapnig the data::\n";
        cout<<"Calss A contains: ";o1.display();
        cout<<"Calss B contains: ";o2.display();
        //  performing swap function
        swap(o1,o2);
        //  After swap
        cout<<"After swaping the data::\n";
        cout<<"Calss A contains: ";o1.display();
        cout<<"Calss B contains: ";o2.display();
        return 0;
    }
*/