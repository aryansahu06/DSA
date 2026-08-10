#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[j - 1])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int j = 0; j <= i; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}
