#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    // base case 
    if(n == 0)
    {
        return;
    }
    if(n == 1)
    {
        return;
    }

    if(arr[0] > arr[1])
    {
        swap(arr[0],arr[1]);
        sort(arr+1, n-1);
    }
}

int main(){


     int arr[] = {7,6,3,5};
     sort(arr,4);
     for(int i=0; i<4; i++)
     {
         cout<<arr[i] <<" ";
     }

    return 0;
}