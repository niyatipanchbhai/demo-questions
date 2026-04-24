#include<iostream>
using namespace std;
class employee
{
    public:
    virtual void salary()
    {
        cout <<"employee salary :"<<endl;
    }
};
class manager : public employee
{
    public :
    void salary()
    {
        cout <<"salary of manager : 7988766"<<endl;
    }
};
class developer:public employee
{
    public:
    void salary()
    {
        cout <<"salary of developer :787876";
    }
};
int main()
{
    employee*e;
    manager m;
    developer d;
    e= &m;
    e->salary();
    e=&d;
    e->salary();
    return 0;
}