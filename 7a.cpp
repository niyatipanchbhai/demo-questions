#include <iostream>
using namespace std;
class person 
{
    public :
    virtual void role()
    {
        cout <<"role of a person ";
    }
};
class teacher : public person 
{
    public :
    void role()
    {
        cout << "role of the teacher "<<endl;
    }
};
class student : public person
{
    public :
    void role()
    {
        cout <<"role of a student "<<endl;
    }
};
int main()
{
    person*p;
    teacher t;
    student s;
    p=&t;
    p->role();
    p=&s;
    p->role();
    return 0;
}
