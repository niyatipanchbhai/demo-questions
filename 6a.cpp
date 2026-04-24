#include<iostream>
using namespace std;
class appliance
{
    public:
    virtual void power()
    {
        cout <<"power of appliance";
    }
};
class fan : public appliance 
{
    public :
    void power()
    {
        cout << "the power of the fan is:5"<<endl;
    }
};
class ac:public appliance
{
    public:
    void power()
    {
        cout <<"the power of the ac : 4"<<endl;
    }
};
int main()
{
    cout <<"the power of the appliances are as follows: "<<endl;
    appliance*a;
    fan f;
    ac c;
    a=&f;
    a->power();
    a=&c;
    a->power();
    return 0;
}