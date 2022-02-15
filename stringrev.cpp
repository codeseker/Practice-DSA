#include <iostream>
using namespace std;

void rev(string& s, int n, int i, int j)
{
    cout<<"call received for "<<s<<endl;
    // base case
    if(i>j)
    {
        return;
    }

    // recursive call
    swap(s[i], s[j]);
    i++;
    j--;
    rev(s,n,i,j);
}

int main(){

    string s = "ayush";
    // string s;
    // cin>>s;
    int n = s.length();

   rev(s,n,0,n-1);
    
    cout<<s<<endl;
    return 0;
}