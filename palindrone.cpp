#include <iostream>
#include <string>
using namespace std;

void check(string s, int i, int j)
{
    if(s.size() == 0)
    {
        return;
    }

    if(s[i] == s[j])
    {
        check(s,i++,j--);
        
    }
    else{
        cout<<"0"<<endl;
    }
}

int main(){


    string s;
    cin>>s;
    int n = s.size();
    check(s,0,n-1);

    return 0;
}