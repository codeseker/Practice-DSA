#include <iostream>
using namespace std;

long long int apples(int arr[], int n, int m)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + arr[i];
    }
    int ans = sum - arr[m];
    return ans;
}

int main(){

    
    int n;
    cin>>n;

    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;

    cout<<apples(arr,n,m)<<endl;

    return 0;
}