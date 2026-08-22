#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int xorr = 0;
    for(int i = 0 ; i<n; i++){
        xorr = xorr ^ arr[i];
        
    }
    cout<<xorr;
    
    return 0;
}