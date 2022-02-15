#include <iostream>
#include <vector>
using namespace std;

vector <int> common(int a[], int b[], int c[], int n1, int n2, int n3)
{
    vector<int> same;
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
           if(same.size()== 0 || a[i]!=same.at(same.size()-1))
           same.push_back(a[i]);

            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j] && a[i] < c[k])
        {
            i++;
        }
        else if (a[i] > b[j] && b[j] < c[k])
        {
            j++;
        }
        else if (a[i] < c[k] && b[j] < c[k])
        {
            k++;
        }
        else if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else if (b[j] == c[k])
        {
            j++;
            k++;
        }
        else
        {
            i++;
            k++;
        }
    }
    return same;
}

int main()
{

    int a[] = {1, 5, 10, 20, 40, 80};
    int b[] = {6, 7, 20, 80, 100};
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int n3 = sizeof(c) / sizeof(c[0]);

    common(a, b, c, n1, n2, n3);

    return 0;
}