#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void cyclic(int arr[], int n)
{
    int i=0;
    int j=n-1;

    while(i!=j)
    {
        swap(arr,i,j);
        i++;
    }
}



int main(){


    int arr[] = {2,3,4,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cyclic(arr,n); 

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}