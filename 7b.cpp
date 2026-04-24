#include <iostream>
using namespace std;
template <typename t>
t cube(t num)
{
    return num*num*num;
}
int main()
{
    int i;
    float f;
    cout <<"enter the integer value : ";
    cin>>i;
    cout <<"enter the floating point value : ";
    cin>>f;
    try 
    {
        if (i==0)
        {
            throw "the integer is zero";
        }
        cout <<"the cube of integer is : "<<cube<int>(i)<<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught"<<msg<<endl;
    }
    try 
    {
        if (f==0)
        {
            throw "the floating point value is zero";
        }
        cout <<"the cube of floating point is : "<<cube<float>(f)<<endl;
    }
    catch (const char *msg)
    {
        cout <<"exception caught"<<msg<<endl;
    }
}