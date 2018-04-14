//
// Created by LAP00344 on 10/1/17.
//


#include "iostream"
#define A 1;
using namespace std;

void swap(int &a, int &b);

int main()
{
    int a,b,c,d;

    cout << "nhap 4 so a,b,c,d:\n" << A;
    cin >> a >> b >> c >> d;

    if (a > b) {
        swap(a,b);
    }

    if (a > c) {
        swap(a,c);
    }

    if (a > d) {
        swap(a,d);
    }

    if (b > c) {
        swap(b,c);
    }

    if (b > d) {
        swap(b,d);
    }

    if (c > d) {
        swap(c,d);
    }

    cout << "sap xep tang dan: " << a << b << c << d << endl;

}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}