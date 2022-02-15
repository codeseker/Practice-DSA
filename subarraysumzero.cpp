#include <iostream>
#include <climits>
using namespace std;

void check(int arr[], int n)
{
    int sum = 0;
    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = (arr[i] + arr[j]);
        }
    }
    if (sum == 0)
    {
        cout << "True";
        // return true;
    }
    else
    {
        cout << "False";
        // return false;
    }
}

int main()
{

    int arr[] = {4, 2, 0, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    check(arr, n);
    return 0;
}