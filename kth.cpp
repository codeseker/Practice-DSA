#include <iostream>
using namespace std;

void kth(int arr1[], int arr2[], int n, int m, int x, int arr3[])
{
    //int arr3[n + m];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    int ele = 0;
    for(int i=0; i<x; i++)
    {
        ele = arr3[i];
    }
    //return ele;
    cout<<ele<<endl;
}

int main()
{
  
    int arr1[] = {100, 112, 256, 349, 770};
    int arr2[] = {72, 86, 113, 119, 265, 445, 892};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int x = 7;
    int arr3[n+m] = {0};
    kth(arr1,arr2,n,m,x,arr3);
    // for(int i=0; i<n+m; i++)
    // {
    //     cout<<arr3[i] << " ";
    // }
   
    return 0;
}