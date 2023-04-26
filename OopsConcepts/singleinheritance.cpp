#include<iostream>
using namespace std;

class Animal{

    public:
        int weight;
        int height;
        int age;
    public:

    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
   
};

int main()
{
       Dog g;

       cout<<g.age<<endl;
       g.speak();

        

        
}