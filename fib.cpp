#include <iostream>
using namespace std;

int fib(int x)
{
    // base case
    if(x<2)
    {
        return x;
    }

    return fib(x-1)+fib(x-2);
}
int rev(int n)
{
    int rev = 0;
    while(n!=0)
    {
        int x = n%10;
        rev = rev*10 + x;
        n = n/10;
    }
    return rev;
}
void sayDigits(int n, string arr[], int k)
{
    // base case
    if(n == 0)
    {
        return ;
    }
    int last = n%10;
    n = n/10;
    sayDigits(n,arr,k);

    cout<<arr[last]<<" ";
}
int climb(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n == 0)
    {
        return 1;
    }
    return climb(n-1) + climb(n-2);
}


int main(){

    int n;
    cin>>n;

   // int x = rev(n);
    //cout<<x<<endl;
    int k = 10;
    string arr[k] = {"zero","one", "two", "three","four","five","six","seven", "eight","nine"};
    
   //sayDigits(n,arr,k);
   // cout<<fib(n)<<endl;
   cout<<climb(n)<<endl;

    return 0;
}