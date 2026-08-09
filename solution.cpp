//largest element in array 

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int l;
    l = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            l = arr[i];
        }
    

    }
    cout<<l<<endl;
   
    return 0;
}