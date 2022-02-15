#include <iostream>
using namespace std;

// void merge(int a[], int b[], int n, int m, int arr[])
// {
//     int i=0;
//     int j=0;
//     int k=0;
    
//     while(i<n && j<m)
//     {
//         if(a[i]<b[j])
//         {
//             arr[k] = a[i];
//             k++;
//             i++;
//         }
//         else{
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n)
//     {
//         arr[k] = a[i];
//         k++;
//         i++;
//     }
//     while(j<m)
//     {
//         arr[k] = b[j];
//         k++;
//         j++;
//     }
// }

void merges(int arr[], int l, int mid, int r){
       int n1 = mid-l+1;
       int n2 = r-mid;
       int a[n1];
       int b[n2];
       for(int i=0; i<n1; i++)
       {
           a[i] = arr[l+i];
       }
       for(int i=0; i<n2; i++)
       {
           b[i] = arr[mid+1+i];
       }
       int t = 0;
       int y = 0;
       int p = l;
       
       while(t<n1 && y<n2)
       {
           if(a[t]<b[y])
           {
               arr[p] = a[t];
               p++;
               t++;
           }
           else{
               arr[p] = b[y];
               p++;
               y++;
           }
       }
       while(t<n1)
       {
           arr[p] = a[t];
           p++;
           t++;
       }
       while(y<n2)
       {
           arr[p] = b[y];
           p++;
           y++;
       }
   }
   void mergeSort(int arr[], int l, int r)
   {
       if(l<r)
       {
           int mid = (l+r)/2;
           mergeSort(arr,l,mid);
           mergeSort(arr,mid+1,r);
           merges(arr,l,mid,r);
       }
   }
   
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i=n-1;
	    int j=0;
	    while(i>=0 && j<m)
	    {
	        if(arr1[i]>arr2[j])
	        {
	            int temp = arr1[i];
	            arr1[i] = arr2[j];
	            arr2[j] = temp;
	            i--;
	            j++;
	        }
	        else{
	            break;
	        }
	    }
	   mergeSort(arr1,0,n-1);
	   mergeSort(arr2,0,m-1);
	}

int main(){

    int arr1[] = {5,6};
    int arr2[]  = {1,2,3,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    // int arr[n+m];
    // merge(a,b,n,m,arr);
    // for(int i=0; i<(n+m); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    merge(arr1,arr2,n,m);
    for(int i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int i=0; i<m; i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}