#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int majorityelement(int n, vector<int> &arr)

{
  int count = 0;
  int el;
  for(int i = 0; i<n; i++){
    if(count==0){
        count=1;
        el = arr[i];
    }
    else if(arr[i]==el){
        count++;
    }
    else{
        count--;
    }
  }
  return el;
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
       int ans = majorityelement(n, arr);
       
            cout << ans <<endl;
        
        return 0;
    }