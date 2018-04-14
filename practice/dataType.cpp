//
// Created by LAP00344 on 11/15/17.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "print list varible:\n";

    char ch = 'a';
    cout << ch << endl;
    
    string name = "nguyen gia hoang";
    cout << name << endl;

    char keyword[] = "hello";
    cout << keyword << endl;

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << greeting << endl;

    int money = 1000;
    float percent = 12.5;

    cout << "  " << money << " " << percent << "\n";

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;


    return 1;
}