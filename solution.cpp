#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;

// MOVES ZERO TO THE END

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> temp;
    int nz;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}