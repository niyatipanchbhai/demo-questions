#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void sound()
    {
        cout <<"sound of the animal"<<endl;
    }
};
class dog:public animal
{
    public:
    void sound()
    {
        cout <<"sound of dog : bho bho"<<endl;
    }
};
class cat : public animal
{
    public:
    void sound()
    {
        cout <<"sound od cat : meow";
    }
};
int main()
{
    cout <<"sound of animals"<<endl;
    animal*a;
    dog d;
    cat c;
    a=&d;
    a->sound();
    a=&c;
    a->sound();
    return 0;
}