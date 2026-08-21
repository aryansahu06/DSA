#include <iostream>
#include <vector>
using namespace std;
vector<int> arrIntersection(vector<int>& A, int n, vector<int>& B, int m)
{
    vector<int> ans;
    vector<int> vis(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j] && vis[j] == 0)
            {
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }
            if (B[j] > A[i])
            {
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> A = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> B = {2, 3, 3, 5, 6, 6, 7};
    int n = A.size();
    int m = B.size();
    vector<int> ans = arrIntersection(A, n, B, m);
    cout << "Array intersection: ";
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}