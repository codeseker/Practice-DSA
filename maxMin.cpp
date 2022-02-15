#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    // first arr
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k];
        k++;
    }

    int i = 0;
    int j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (first[i] <= second[j])
        {
            arr[k] = first[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = second[j];
            k++;
            j++;
        }
    }

    while (i < len1)
    {
        arr[k] = first[i];
        k++;
        i++;
    }
    while (j < len2)
    {
        arr[k] = second[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left wala part sort kar
    mergeSort(arr, s, mid);

    // right wala
    mergeSort(arr, mid + 1, e);

    // merge both arrays
    merge(arr, s, e);
}

int main()
{

    int arr[] = {10, 2, 45, 65, 8, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Minimum Element is: "<<arr[0]<<endl;
    cout<<"Maximum element is: "<<arr[n-1]<<endl;
    return 0;
}