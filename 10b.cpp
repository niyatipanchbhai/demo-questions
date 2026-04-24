#include<iostream>
#include <cmath> //used for pow
using namespace std;

template <typename T>
T power(T a, T b)
{
    return pow(a , b);
}

int main()
{
    int i1, i2;
    double d1, d2;

    cout << "Enter base (int): ";
    cin >> i1;
    cout << "Enter exponent (int): ";
    cin >> i2;

    cout << "Enter base (double): ";
    cin >> d1;
    cout << "Enter exponent (double): ";
    cin >> d2;

    try
    {
        if(i2 < 0)
        {    
        throw "Negative exponent!";
        }
        cout << "Power (int): " << power<int>(i1, i2) << endl;
    }
    catch(const char* msg)
    {
        cout << msg << endl;
    }

    try
    {
        if(d2 < 0)
            {throw "Negative exponent!";}
        cout << "Power (double): " << power<double>(d1, d2) << endl;
    }
    catch(const char* msg)
    {
        cout << msg << endl;
    }
}