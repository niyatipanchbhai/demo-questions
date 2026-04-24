#include<iostream>
using namespace std;
template <typename t >
t divide( t a , t b)
{
    return a/b;
}
int main()
{
    int i1=8 , i2=4;
    float f1=8.8 , f2=4.4;
    cout <<"value of i1: "<<i1<<endl;
    cout <<"value of i2: "<<i2<<endl;
    cout <<"value of f1: "<<f1<<endl;
    cout <<"value of f2: "<<f2<<endl;
    try 
    {
        if (i2=0)
        {
            throw "not possible to divide by zero  ";
        }
        cout <<"the division of the integer values is : "<<divide<int>(i1,i2)<<endl;
    }
    catch (const char*msg)
    {
        cout <<"exception caught : "<<msg<<endl;
    }
    try 
    {
        if (f2=0)
        {
            throw "not possible to divide by zero ";
        }
        cout <<"the division of the float values is : "<<divide<float>(f1,f2)<<endl;
    }
    catch (const char*msg)
    {
        cout <<"exception caught"<<msg<<endl;
    }
}