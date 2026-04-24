#include<iostream>
using namespace std;
template <typename t>
t add (t a , t b)
{
    return 0;
}
int main()
{
    int i1 , i2 ;
    float f1 , f2;
    cout <<"value of i1 : ";
    cin>>i1;
    cout <<"value of i2 : ";
    cin>>i2;
    cout <<"value of f1 : ";
    cin>>f1;
    cout <<"value of f2 : ";
    cin>>f2;
    try 
    {
        if ((i1+i2)>100)
        {
            throw "sum exceeds 100";
        }
        cout <<"the addition of the integer values is : "<<add<int>(i1,i2)<<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught : "<<msg<<endl;
    }
    try 
    {
        if ((f1+f2)>100)
        {
            throw "sum exceeds 100";
        }
        cout <<"the sum of floating point is : "<<add<float>(f1,f2)<<endl;
    }
    catch (const char*msg)
    {
        cout <<"exception caught : "<<msg<<endl;
    }
}