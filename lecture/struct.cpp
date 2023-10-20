#include "iostream"
using namespace std;

int main()
{
    struct product
    {
        int sku;
        char name[5];
        int number[5];
        int amount;
    };

    struct product iphone;

    iphone.sku =123;
    iphone.amount = 1000;

    int nameArr[5] = {1,2,3};

    strcpy(iphone.name, "aaa");

    for (int i=0; i < sizeof(nameArr) -1  ; i++) {
        iphone.number[i] = nameArr[i];
    }

    cout << iphone.sku << endl;
    cout << iphone.amount << endl;
    cout << iphone.name << endl;

    cout << "print array" << endl;

    int len = sizeof(iphone.number)/sizeof(iphone.number[0]);
    for (int i=0; i < len ; i++) {
        cout << iphone.number[i] << endl;
    }

    return 1;
}