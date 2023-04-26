#include<iostream>
using namespace std;

class Animal{

    public:
        int weight;
        int height;
        int age;
    public:

    void bark()
    {
        cout<<"barking"<<endl;
    }
};

class Human{

public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }

   
};

class Hybrid: public Animal,public Human{


};

int main()
{
       Hybrid hy;

      
       hy.speak();
       hy.bark();

        

        
}