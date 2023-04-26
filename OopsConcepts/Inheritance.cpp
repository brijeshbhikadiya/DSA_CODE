#include<iostream>
using namespace std;

class Student{

    public:
        int weight;
        int height;
        int age;

    public:

        int getAge()
        {
            return this->age;
        }
        void setWeight(int weight)
        {
            this->weight=weight;
        }

};

class Male:public Student{
    public:
        string color="red";

    public:
        string getColor()
        {
            return this-> color;
        }
};

int main()
{
        Male obj;

        cout<<obj.weight<<endl;
        cout<<obj.age<<endl;
        cout<<obj.height<<endl;

        cout<<obj.color<<endl;

        obj.setWeight(80);

        cout<<obj.weight<<endl;

        string a=obj.getColor();
        cout<<a<<endl;

        

        
}