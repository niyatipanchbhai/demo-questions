#include<iostream>
using namespace std;
template <typename t>
t minimim(t a , t b )
{
    return (a<b)?a : b;
}
int main()
{
    int i1 , i2;
    double d1 , d2;
    cout <<"value of i1 :";
    cin >>i1;
    cout <<"value of i2: ";
    cin>>i2;
    cout <<"value of d1: ";
    cin>>d1;
    cout <<"value of d2 : ";
    cin >>d2;
    try
    {
        if (i1<0 || i2<0)
        {
            throw "the value is negative";
        }
        cout <<"the min term is : "<<minimim<int >(i1, i2)<<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught";
    }
    try
    {
        if (d1<0 || d2<0)
        {
            throw "the value is negative";
        }
        cout <<"the min term is : "<<minimim<double >(d1, d2)<<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught";
    }

}