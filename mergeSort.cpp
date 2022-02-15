#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *a = new int[len1];
    int *b = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        a[i] = arr[k];
        k++;
    }
     k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        b[i] = arr[k];
        k++;
    }

    // merge both arrays
    int i = 0;
    int j = 0;
    k = s;

    while (i < len1 && j < len2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < len1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < len2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    //base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {3,4,1,7,2,5,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}