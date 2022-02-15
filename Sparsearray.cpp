#include <iostream>

using namespace std;

int main(){
  
    int n;
    cin>>n;
    char arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cout<<endl;

    }
    for(int i=0; i<n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    int q;
    char que[q];
    for(int i=0; i<q; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }




    return 0;

}