#include <iostream>
using namespace std;
template <typename t>
t Modulus( t a , t b )
{
    return a%b;
}
int mian()
{
    int  a , b;
    cout << "enter the value of a: ";
    cin>>a;
    cout <<"enter the value of b : ";
    cin >>b ;
    try 
    {
        if (b==0)
        {
            throw "the value of b should be more than zero";
        }
        cout << "the modulus of a and b is : "<<Modulus<int>(a , b)<<endl;
    }
    catch (const char *msg)
    {
        cout << "exception caught "<<msg<<endl;
    }
}