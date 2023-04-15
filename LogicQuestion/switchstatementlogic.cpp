//program is the total amount is given you have been taught how 100 ruppes not are required,same 50,20,1 ruppes notes are required.

#include<iostream>
using namespace std;
int main()
{
    int totalamount,ans1,ans2,ans3,ans4;
    cout<<"Enter a Total Amount :"<<endl;
    cin>>totalamount;

    switch(true)
    {
        case 1: ans1=totalamount/100;
                cout<<"the total "<<ans1<<" ruppes note are requied."<<endl;
                ans1=totalamount%100;
        case 2: ans2=ans1/50;
                cout<<"the total "<<ans2<<" ruppes note are requied."<<endl;
                ans2=ans1%50;
        case 3: ans3=ans2/20;
                cout<<"the total "<<ans3<<" ruppes note are requied."<<endl;
                ans3=ans2%20;
        case 4: ans4=ans3/1;
                cout<<"the total "<<ans4<<" ruppes note are requied."<<endl;
                break;
    }
}
