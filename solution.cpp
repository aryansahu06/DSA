#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int longestarray(int n, vector<int> &book, int target)
{
    int left = 0;
    int right = n - 1;
    sort(book.begin(), book.end());

    while (left < right)
    {
        int sum = book[left] + book[right];
        if (sum == target)
        {
            cout << "YES";
            return 1;
        }
        else if (sum < target)
        {
            left++;
        }

        else
        {
            right--;
        }
    }
    cout << "NO";
    return 0;
}
int main()
{
    int n = 5;
    vector<int> book = {2, 4, 5, 6, 9};
    int target = 10;

    longestarray(n, book, target);

    return 0;
}