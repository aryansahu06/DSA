// check the array is sorted or not

#include <iostream>
#include <algorithm>
using namespace std;





int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 1 ; i<n ; i ++){
        if(arr[i]>=arr[i-1]){
           
        }
       else{
        cout<<"false";
        break;
    }
      cout<<"true";
      break;
    
}
   
    return 0;
}

