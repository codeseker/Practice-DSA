#include <iostream>
using namespace std;


void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        /* code */
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void Intersection(int a[], int n, int b[], int m)
{
    mergeSort(a,0,n-1);
    mergeSort(b,0,m-1);
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    while(i<n)
    {
        i++;
    }
    while(j<m)
    {
        j++;
    }
}

int main(){

    int a[] = {3,2,1};
    int b[] = {3,4,2,5};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    Intersection(a,n,b,m);
    


    return 0;
}