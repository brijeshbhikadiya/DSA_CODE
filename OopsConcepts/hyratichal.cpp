#include<iostream>
using namespace std;

class A{
    public:

    void func1()
    {
        cout<<"Inside function 1"<<endl;
    }
};

class B:public A{

    public:
     void func2()
    {
        cout<<"Inside function 2"<<endl;
    }
   
};

class C: public A{

    public:
     void func3()
    {
        cout<<"Inside function 3"<<endl;
    }

};

int main()
{
      A a1;

      a1.func1();

      B b1;

      b1.func1();
      b1.func2();

      C c1;

      c1.func1();
      c1.func3();


        

        
}