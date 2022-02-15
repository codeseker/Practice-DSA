#include <iostream>
using namespace std;

int jumps(int arr[], int n)
{
    
    int maxR = nums[0];
    int step = nums[0];
    int jump = 1;

    if(n==1)
    {
        return 0;
    }
    else if(arr[0] == 0)
    {
        return -1;

    }
    else{
        for(int i=1; i<n; i++)
        {
            if(i==n-1)
            {
                return jump;
            }
            maxR = max(maxR,i+nums[i]); // max steps that can be done by this index;
            step--;
            if(step == 0)
            {
                jump++;
                if(i>=maxR)
                {
                    return -1;
                }
                step = maxR-i;
            }
        }
    }
    return jump;
}    

int main(){

    int arr[] = {1, 4, 3, 2, 6, 7} ;
    int n = sizeof(arr)/sizeof(arr[0]);
  
    cout<<jumps(arr,n);

    return 0;
}