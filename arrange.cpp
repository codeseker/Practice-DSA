#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void arrange(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[0] >= 0)
        {
            if (arr[i] >= 0 && arr[i + 1] < 0)
            {
                swap(arr, i, i + 1);
                i += 2;
            }
            else
            {
                continue;
                i++;
            }
        }
    }
}

int main()
{

    int arr[] = {5, -5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}