int main()
{
    int arr[] = {18,22,8,9,15,4,3};
    int n = 7;
    int max = arr[n-1];
    cout<< max << " ";
    for(int i = n-2; i>=0 ; i--){
        if(arr[i]>max){
            max = arr[i];
            cout<<max<< " ";
        }
    }

    return 0;
}