#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a,b,c,d,e=0;
    cin >> a ;
    while (a--)
    {
        cin >>b>>c>>d;
        if(b+c+d>=2)
            e++;
    }
    cout << e;
}
