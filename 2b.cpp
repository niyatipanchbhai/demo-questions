#include <iostream>
using namespace std;
template <typename T >
T substract( T a , T b )
{
    return a-b;
}
int main()
{
    int i1 = 3 ,i2 = 4;
    double d1 = 4.44 , d2 = 3.33;
    cout << "value of i1 : "<<i1<<endl;
    cout <<"value of i2 : "<<i2<<endl;
    cout <<"value of d1 :"<<d1<<endl;
    cout <<"value od d2 : "<<d2<<endl;
    
    try
    {
        if (i1 <0,i2<0)
        {
            throw"the value id negative";
        }
        cout <<"the substraction of integer value is :"<<substract<int>(i1,i2)<<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught"<<msg<<endl;
    }
    try
    {
        if (d1<0, d2<0)
    {
        throw"the value is negative";
    }
    cout <<"the substraction of  double is : "<<substract<double>(d1,d2)<<endl;
}
catch(const char*msg)
{
    cout <<"exception caught"<<msg<<endl;
}
}