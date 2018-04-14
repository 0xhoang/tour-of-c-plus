//
// Created by LAP00344 on 9/19/17.
//

#include <iostream>
using namespace std;

int main()
{
    float C=0;
    float F;

    cout << "Nhap do F:\n";
    cin >> F;

    C = 5*(F-32)/float(9);
    cout << "Doi do F sang do C: " << C;

    return 0;
}