//
// Created by LAP00344 on 11/16/17.
//

#include "iostream"
using namespace std;

int main ()
{
    int *p = new int;
    int *i = new int[100];
    int *t = new int;
    char *c = new char;

    cout << c << endl;

    int add = 10;
    p = &add;
    printf("addr: %p \n", p);

    cout << "value: " << *p << endl;
    cout << "addr: " << &p << endl;
    cout << "value of p: " << p << endl;

    cout << "test:" <<endl;
    *t=5;
    cout << *t << endl;
    printf("addr1: %p \n", t);
    *t=*t+5;
    cout << *t << endl;
    printf("addr1: %p \n", t);
    return 1;
}