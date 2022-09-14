/*      Single inheritance      */

//  Public inheritance
/*
    #include <iostream>
    using namespace std;
    
    class base
    {
        private:
            int data_1;
        public:
            int data_2;
            void setdata(void);
            int getdata_1(void);
            int getdata_2(void);
    };
    void base::setdata(void)
    {
        data_1=10;
        data_2=20;
    }
    int base::getdata_1(void)
    {
        return data_1;
    }
    int base::getdata_2(void)
    {
        return data_2;
    }

    class derived: public base
    {
        private:
            int data_3;
        public:
            void process(void);
            void display(void);
    };
    void derived :: process(void)
    {
        data_3 = data_2 * getdata_1();
    }
    void derived::display(void)
    {
        cout<<"The value in data_1: "<<getdata_1()<<endl
            <<"The value in data_2: "<<data_2<<endl
            <<"The value in data_3: "<<data_3<<endl;
    }

    int main()
    {
        derived obj1;
        obj1.setdata();
        obj1.process();
        obj1.display();
        return 0;
    }
*/




//  Private inheritance
/*
    #include <iostream>
    using namespace std;
    
    class base
    {
        private:
            int data_1;
        public:
            int data_2;
            void setdata(void);
            int getdata_1(void);
            int getdata_2(void);
    };
    void base::setdata(void)
    {
        data_1=10;
        data_2=20;
    }
    int base::getdata_1(void)
    {
        return data_1;
    }
    int base::getdata_2(void)
    {
        return data_2;
    }

    class derived: private base
    {
        private:
            int data_3;
        public:
            void process(void);
            void display(void);
    };
    void derived :: process(void)
    {
        cout<<"Calling setdata.. \n";
        setdata();
        data_3 = data_2 * getdata_1();
    }
    void derived::display(void)
    {
        cout<<"The value in data_1: "<<getdata_1()<<endl
            <<"The value in data_2: "<<data_2<<endl
            <<"The value in data_3: "<<data_3<<endl;
    }

    int main()
    {
        derived obj1;
        // obj1.setdata();
        obj1.process();
        obj1.display();
        return 0;
    }
*/