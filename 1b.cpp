#include<iostream>
using namespace std;
template <typename t>
t multiply(t a , t b)
{
    return a*b;
}
int main()
{
    int i1 , i2;
    float f1 , f2;
    cout <<"value of i1 :";
    cin>> i1;
    cout <<"value of i2 :";
    cin >>i2;
    cout <<"value of f1: ";
    cin>>f1;
    cout <<"value of f2: ";
    cin>>f2;
    try 
    {
        if (i1<0 , i2<0)
        {
            throw "value is negative";
        }
        cout << " the multiplication is : "<<multiply<int>(i1,i2)<<endl;
    }
    catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }
    try 
    {
        if(f1<0 ,f2<0)
        {
            throw "value of negative ";
        }
        cout <<"the multiplication is : "<<multiply<float>(f1,f2)<<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught : "<<msg<<endl;
    }

}