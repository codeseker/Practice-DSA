#include <iostream>
using namespace std;

int find(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == mid)
        {
            return arr[mid];
        }
        else if (arr[mid] > mid)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-4, -1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans[n];
    // cout<<find(arr,n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            ans[i] = i;
            cout << ans[i] << " ";
        }
    }
}