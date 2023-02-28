#include<iostream>
using namespace std;

//call by refernce
void Swapi(int &x, int &y)
{
    int temp;

    temp = x;
    x= y;
    y = temp;
}

void Swapd(double &x, double &y)
{
    double temp;

    temp = x;
    x= y;
    y = temp;
}

int main()
{
    int a = 11, b = 10;

    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";

    Swapi(a,b);

    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";

    double p = 11.9, q = 10.1; 
    cout<<"Value of a"<<p<<"\n";
    cout<<"Value of b"<<q<<"\n";

    Swapd(p,q);

    cout<<"Value of a"<<p<<"\n";
    cout<<"Value of b"<<q<<"\n";

    return 0;
}