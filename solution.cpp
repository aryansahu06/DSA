#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> Rearrrangearray(vector<int> &arr)
{
    int n = arr.size();
    int positivearray = 1;
    int negativearray = 0;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negativearray] = arr[i];
            negativearray += 2;
        }
        else
        {
            ans[positivearray] = arr[i];
            positivearray += 2;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = Rearrrangearray(arr);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}