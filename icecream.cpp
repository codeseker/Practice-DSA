#include <iostream>
using namespace std;

void search(int arr[], int n, int key)
{
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == key)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t-- > 0)
    {

        int n, key;
        cin >> n >> key;
        int arr[n];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
        }

        search(arr, n, key);
    }

    return 0;
}