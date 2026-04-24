#include <iostream>
using namespace std;
template <typename t>
t average( t a , t b)
{
    return (a+b)/2;
}
int main()
{
    int i1=-7 , i2=6;
    double d1=8.88 , d2=7.77;
    cout <<"value of i1: "<<i1<<endl;
    cout <<"value of i2: "<<i2<<endl;
    cout <<"value of d1: "<<d1<<endl;
    cout <<"value of d2: "<<d2<<endl;
    try 
    {
        if (i1<0 || i2<0)
        {
            throw "value is negative ";
        }
        cout <<"the average of the integer values is : "<<average<int>(i1,i2)<<endl;
    }
    catch (const char*msg)
    {
        cout <<"exception caught : "<<msg<<endl;
    }
    try 
    {
        if (d1<0 || d2<0)
        {
            throw "value is negative ";
        }
        cout <<"the average of the double values is : "<<average<double>(d1,d2)<<endl;
    }
    catch (const char*msg)
    {
        cout <<"exception caught"<<msg<<endl;
    }
}
