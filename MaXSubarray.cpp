#include <iostream>
#include <climits>
using namespace std;

int maxSub(int arr[], int n)
{
    int curr = 0;
    int mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        curr = curr + arr[i];
        if(curr<arr[i])
        {
            curr = arr[i];
        }
        if(curr>mx)
        {
            mx = curr;
        }
    }
    return mx;
}

int main()
{

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSub(arr, n);

    return 0;
}