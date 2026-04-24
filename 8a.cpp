#include<iostream>
using namespace std;
class food 
{
    public :
    virtual void type()
    {
        cout <<"the type of food ";
    }
};
class veg:public food 
{
    public:
    void type()
    {
        cout <<"the type of food is veg"<<endl;
    }
};
class nonveg :public food 
{
    public :
    void type()
    {
        cout <<"the type offood is non veg";
    }
};
int main()
{
    food*f;
    veg v ;
    nonveg n;
    f=&v;
    f->type();
    f=&n;
    f->type();
    return 0;
}