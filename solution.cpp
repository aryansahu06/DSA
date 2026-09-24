#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &nums , int target)
{
    int n = nums.size();

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    
    vector <int> arr = {1,3,5,6,9,11,13};
    int target = 9;
    int result = BinarySearch(arr,target);
    cout<<"Element found at index: "<< result <<endl;
    return 0;

}