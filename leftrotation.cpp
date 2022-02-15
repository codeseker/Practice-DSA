#include <iostream>
using namespace std;

void swap(long long arr[], int  i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void left(long long arr[], long long n, long long d)
{
    while(d-->0)
    {
        int i=0; 
        int j=n-1;
        
        while(i!=j)
        {
            swap(arr,i,j);
            j--;
        }
    }
}

int main(){
    
    long long n,d;
    cin>>n>>d;
   long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    left(arr,n,d);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}