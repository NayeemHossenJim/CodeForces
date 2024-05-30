#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n,count1=0,count2=0;
    cin >> n ;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
        if(arr[i]=='A')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        cout << "Friendship" ;
    }
    if(count1 > count2)
    {
        cout << "Anton" ;
    }
    if(count1<count2)
    {
        cout << "Danik" ;
    }
}