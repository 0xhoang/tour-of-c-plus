//
// Created by LAP00344 on 10/1/17.
//

#include "iostream"
using namespace std;

void ham(int x);

int main()
{
    ham(1);

    int a,b,c,d, min, max;
    cout << "Nhap 4 so a,b,c,d\n";
    cin >> a >> b >> c >>d;

    min = a;
    max = a;

    if (min > b)
    {
        min = b;
    }

    if (min > c)
    {
        min = c;
    }

    if (min > d)
    {
        min = d;
    }

    cout << "so min la " << min << endl;

    if (max < b)
    {
        max = b;
    }

    if (max < c)
    {
        max = c;
    }

    if (min < d)
    {
        max = d;
    }

    cout << "so max la " << max << endl;
    return  0;
}

void  ham(int x)
{
    cout << x << endl;
}