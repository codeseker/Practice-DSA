#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int arr2[n];
    for(int i=0; i<n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            arr2[i] = arr[i];
            i+=2;
        }
        arr2[i] = arr[i];
        
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }

    
    
    return 0;
}