#include <iostream>
using namespace std;
class bank 
{
    public:
    virtual void interest()
    {
        cout << "interest of the bank";
    }
};
class sbi : public bank
{
    public :
    void interest()
    {
        cout << "interest of the sbi bank : 15%"<<endl;
    }
};
class hdfc :public bank 
{
    public:
    void interest()
    {
        cout <<"interest of the hdfc bank : 20%";
    }
};
int main()
{
    bank*b;
    sbi s;
    hdfc h;
    b =&s;
    b->interest();
    b=&h;
    b->interest();
    return 0;
}