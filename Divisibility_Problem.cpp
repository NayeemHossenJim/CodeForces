#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t,a,b;
    cin >> t ;
    for (int  i = 1; i <=t; i++)
    {
       cin >> a >> b ;
       if(a%b==0)
       {
         cout << 0 << endl ;
       }
       else
       {
        cout<< b-(a%b) << endl ;
       }
    }
    
}