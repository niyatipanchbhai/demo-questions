#include<iostream>
using namespace std;
class student 
{
    public :
    virtual void display()
    {
        cout << " display student info";
    }
};
class ug : public student 
{
    public :
    void display()
    {
        cout << "display info of student in ug"<<endl;
    }
};
class pg:public student 
{
    public :
    void display()
    {
        cout <<"display student info in pg"<<endl;
    }
};
int main()
{
    student*s;
    ug u;
    pg p;
    s=&u;
    s->display();
    s=&p;
    s->display();
    return 0;
}