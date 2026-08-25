


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

long long Maximumsubarraysum(int n, vector<int> &arr)

{
  int sum = 0;
  long long max = INT64_MIN;
  for(int i = 0; i<n; i++){
    sum += arr[i];
    if(sum>max){
        max = sum;
    
    }
    if(sum<0){
        sum = 0;
    }
    
  }
  return max;
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
       int ans = Maximumsubarraysum(n, arr);
       
            cout << ans <<endl;
        
        return 0;
    }