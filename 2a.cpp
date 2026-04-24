#include <iostream>
using namespace std;
class vehicle 
{
    public:
    virtual void showspeed()
    {
        cout <<"speed of vehicle : ";
    }
};
class car : public vehicle
{
    public :
    void showspeed()
    {
        cout <<"speed of the car : 80"<<endl;
    }
};
class bike :public vehicle
{
    public :
    void showspeed()
    {
        cout << "speed of bike: 70 ";
    }
};
int main()
{
    vehicle*v;
    car c;
    bike b;
    v =&c;
    v->showspeed();
    v=&b;
    v->showspeed();
    return 0;
}