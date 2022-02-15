#include <iostream>
using namespace std;


int search(int arr[], int n, int s, int e, int key)
{
    if(s>e)
    {
        return -1;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key)
    {
        return mid;
    }

    if(arr[mid] > key)
    {
        return search(arr,n,s,mid-1,key);
    }
    else{
        return search(arr,n,mid+1,e,key);
    }
    
}

int linear(int arr[], int n, int i, int key)
{
    if(n == 0)
    {
        return 0;
    }

    if(arr[i] == key)
    {
        return i;
    }
    else{
        i = i+1;
        n = n-1;
        return linear(arr,n,i,key);
    }
}

bool isSorted(int arr[], int n, int i){
    
    // base case
    if(n<2)
    {
        return true;
    }

    // recursive
    if(arr[i] < arr[i+1])
    {
        i = i+1;
        n = n-1;
        return isSorted(arr,n,i);
    }
    else{
        return false;
    }
}

int arrSum(int arr[], int n, int i, int initialSum)
{
    // base case
    if(n == 0)
    {
        return initialSum;
    }

    // recursive
    int sum = initialSum + arr[i];
    n = n-1;
    i = i+1;
   return arrSum(arr,n,i,sum);
}
bool palindrome(string str, int i, int j)
{
    // base case
    if(i>=j)
    {
        return true;
    }

    // recursion 
    if(str[i] != str[j])
    {
        return false;
    }
    else{
        i = i+1;
        j = j-1;
        return palindrome(str,i,j);
    }
}
string rev(string str, int i, int j)
{
    // base case
    if(i>=j)
    {
        return str;
    }

    swap(str[i],str[j]);
    i = i+1;
    j = j-1;
    return rev(str,i,j);
}

int powerof(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    if(b == 1)
    {
        return a;
    }

    int ans = powerof(a,b/2);

    if(b % 2 == 0)
    {
        return ans*ans;
    }
    else{
        return a * ans*ans;
    }
}
int main(){


    // int arr[] = {1,2,10,56,78,3};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // cout<<search(arr,n,0,n-1,145354534)<<endl;
    // cout<<linear(arr,n,0,9)<<endl;
    // cout<<isSorted(arr,n,0)<<endl;
    // cout<<arrSum(arr,n,0,0);

    // string str;
    // cin>>str;
    // cout<<palindrome(str,0,str.length()-1)<<endl;
    // cout<<rev(str,0,str.length()-1)<<endl;
    int a,b;
    cin>>a>>b;
    cout<<powerof(a,b)<<endl;
    return 0;
}