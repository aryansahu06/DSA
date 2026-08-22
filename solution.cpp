#include <iostream>

using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 1, 1, 1, 1, 1, 0, 1};
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << maxCount;
    return 0;
}