#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    float sum = 0 ;
    cin >> n ;
    int arr[n];
    for (int i = 1; i <=n ; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum/n ;
}
