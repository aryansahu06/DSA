// print second largest element in array

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int largest = arr[0] ;
    int secondlargest = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for(int i = 0 ; i<n; i++){
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest = arr[i];
        }
    }
    cout<<secondlargest<<endl;
    return 0;
}
        
     

    
   

    
    
    
   
    return 0;
}