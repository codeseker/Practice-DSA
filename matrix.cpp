#include <iostream>
using namespace std;
#include <vector>

int diagonal(int arr[][3], int row, int col)
{
    int sum = 0;
    int sum1 = 0;
    if (row % 2 == 0 && col % 2 == 0)
    {
        // even matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    sum = sum + arr[i][j];
                }
                if (i + j == row - 1)
                {
                    sum1 = sum1 + arr[i][j];
                }
            }
        }
    }
    else
    {
        // odd matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    sum = sum + arr[i][j];
                }
                if (i + j == row - 1 && i != j)
                {
                    sum1 = sum1 + arr[i][j];
                }
            }
        }
    }

    return sum1 + sum;
}

void rotate(int arr[][3], int n, int m, int ans[][3])
{
    ans[n][m] = 0;

    int k = 0;
    int l = 0;
    for (int j = 0; j < m; j++)
    {
        for (int row = n - 1; row >= 0; row--)
        {
            ans[k][l] = arr[row][j];
            l++;
        }
        k++;
    }
}

int main()
{

    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    //  cout << diagonal(arr, 3, 3) << endl;
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}