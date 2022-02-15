#include <iostream>
#include <climits>
using namespace std;

// brute-force approach
int profitStocks(int arr[], int n)
{
    int profit = 0;
    int mxProfit = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            profit = arr[j] - arr[i];
            mxProfit = max(mxProfit, profit);
            //    cout<<mxProfit<<" ";
        }
    }
    if(mxProfit<0)
    {
        return 0;
    }
    return mxProfit;
}

int proft(int arr[], int n)
{
    int mn = INT_MAX;
    int prof = 0;

    for(int i=0; i<n; i++)
    {
        mn = min(mn,arr[i]);
        prof = max(prof,arr[i]-mn);
    }
    return prof;
}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<proft(arr,n);
    // cout << profitStocks(arr, n); 

    return 0;
}