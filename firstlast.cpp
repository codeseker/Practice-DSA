#include <iostream>
#include <vector>
using namespace std;

vector<int> firstlast(int arr[], int n, int x)
{
    vector<int> occurence;
    int first = 0;
    int last = 0;
    for(int i=0; i<n;i++)
    {
        if(arr[i] == x)
        {
            first = i;
            break;
        }
    }

    occurence.push_back(first);

    for(int i=n-1; i>=0; i--)
    {
        if(arr[i] == x)
        {
            last = i;
            break;

        }
    }
    occurence.push_back(last);

    return occurence; 
}

int main(){
 
    int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;

    firstlast(arr,n,x);


    return 0;
}