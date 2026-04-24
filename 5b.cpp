#include <iostream>
using namespace std;

template <typename t>
t maximum(t a, t b)
{
    return (a > b) ? a : b;
}

int main()
{
    int i1, i2;
    float f1, f2;

    cout << "enter the value of i1 : ";
    cin >> i1;

    cout << "enter the value of i2 : ";
    cin >> i2;

    cout << "enter the value of f1 : ";
    cin >> f1;

    cout << "enter the value of f2 : ";
    cin >> f2;

    try 
    {
        if (i1 == i2)
        {
            throw "both values are equal";
        }
        cout << "Maximum integer value is: " << maximum<int>(i1, i2) << endl;
    }    
    catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    try 
    {
        if (f1 == f2)
        {
            throw "both values are equal";
        }
        cout << "Maximum float value is: " << maximum<float>(f1, f2) << endl;
    }    
    catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}