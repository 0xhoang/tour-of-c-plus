#include "iostream"
using namespace std;

#define n1 3;
#define n2 5;
const int n3 = 5;

int main()
{
    int yearOld [10];
    int matrix[10][10];

    int test[4] = {1,2,3,4};
    int autoElement[] = {1,2,3,4,5,6};

    int num = n2;
    int arr[n3];

    cout << "Input a array has 5 element:" << endl;

    for (int i = 0; i <= num-1; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= num-1; i++) {
        printf("%d \n", arr[i]);
    }

    return 1;
}