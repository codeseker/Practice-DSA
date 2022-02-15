#include <iostream>
using namespace std;

// void reverse(int arr[], int n)
// {
//     int start = 0;
//     int end = (n-1);

//     while(start<end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }

// }

void reverseArr(int arr[],int start, int end)

{
    if(start>=end)
    {
        return;
    }
    
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        reverseArr(arr,start+1,end-1);
    
}


int main(){


     int arr[] = {1,2,3,4,5};
     reverseArr(arr,0,4);
     for(int i=0; i<5; i++)
     {
         cout<<arr[i]<<" ";
     }

    return 0;
}