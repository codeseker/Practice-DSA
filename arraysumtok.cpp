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

int sum(int arr[], int n, int k)
{
    mergeSort(arr, 0, n - 1);
    int i = 0;
    int j = n - 1;
    int c = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            c++;
            int m = i + 1;
            while (m < j && (arr[m] + arr[j]) == k)
            {
                c++;
                m++;
            }
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else if (arr[i] + arr[j] > k)
        {
            j--;
        }
    }
    return c;
}

bool check(int arr[], int n)
{
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    //cout << sum(arr, n, 6);
    cout<<check(arr,n);

    return 0;
}

