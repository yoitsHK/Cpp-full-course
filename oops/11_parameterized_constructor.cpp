/*      Parameterized constructor     */

/*

    #include <iostream>
    using namespace std;

    class A
    {
        private:
            int a,b;
        public:
            void display(void);
            A(int,int);                     //  parameterized constructor
    };
    void A::display(void)
    {
        cout<<"a = "<<a<<" , "<<"b = "<<b<<endl;
    }
    A::A(int n1, int n2)
    {
        a=n1;
        b=n2;
    }

    int main()
    {
        //  implicit call
        A obj1(85,69);

        //  explicit call
        A obj2 = A(22,18);

        obj1.display();
        obj2.display();

        return 0;
    } 

*/



/*

    #include <iostream>
    #include <cmath>
    using namespace std;

    class point 
    {
        private:
            int x,y;
        public:
            void display(void);                    //      class member function declaration
            point(int,int);                        //      parameterize constructor declaration
        friend void distance(point,point);         //      friend function declaration
    };

    void point::display(void)                       //     class member function definition
    {
        cout<<"The point is :: ("<<x<<","<<y<<")"<<endl;
    }

    point::point(int x1,int y1)                     //     parameterize constructor definition
    {
        x=x1;
        y=y1;
    }

    void distance(point p, point q)                 //     friend function definition
    {
        int d;
        d= (pow((q.x-p.x),2)+pow((q.y-p.y),2));
        d=sqrt(d);
        cout<<"The distance between 2 point is :: "<<d<<endl;
    }

    int main()
    {
        //  explicit call
        point p1 = point(0,1);
        point q1 = point(0,6);
        p1.display();
        q1.display();
        distance(p1,q1);

        //  implicit call
        point p2(1,0);
        point q2(70,0);
        p2.display();
        q2.display();
        distance(p2,q2);

        return 0;
    }

*/