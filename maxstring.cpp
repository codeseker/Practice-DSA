#include <iostream>
#include<string>
#include <climits>
using namespace std;

int str(string s, int k)
{
    int vowel = 0;
    for(int i=0; i<k; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
    }
    int mx = INT_MIN;
    mx = max(mx,vowel);
    return mx;
}

int main(){


    string s = "caberqiitefg";

    cout<<str(s,5)<<endl;

    return 0;
}