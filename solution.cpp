#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int a = n * (n + 1) / 2;

    int arr[n] = {1, 2, 3, 5};
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    if (sum != a)
    {
        int k = a - sum;
        cout << "your missing number is :- " << k << endl;
    }

    return 0;
}