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

class GermanShapered: public Dog{

};

int main()
{
       GermanShapered g;

       cout<<g.age<<endl;
       g.speak();

        

        
}