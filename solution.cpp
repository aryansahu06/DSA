#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &row)
{
    int start = 0;
    int end = row.size() - 1;

    while (start < end)
    {
        swap(row[start], row[end]);
        start++;
        end--;
    }
}
void Rotatematrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i]);
    }
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    Rotatematrix(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}