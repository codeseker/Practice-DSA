#include <iostream>
using namespace std;



void next(int arr[], int n)
{
   int k,l;

   for(k=n-2; k>=0; k--)
   {
       if(arr[k]<arr[k+1])
       {
           break;
       }
   }
   if(k<0)
   {
       reverse(arr,n);
   }
   else{
       for(l=n-1; l>k; l--)
       {
           if(arr[l]>arr[k])
           {
               break;
           }
       }
       swap(arr,l,k);
       reverse2(arr,k+1,n);
   }
    
}

int main()
{

    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

     next(arr, n);
    return 0;
}