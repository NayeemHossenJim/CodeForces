#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void Solve()
{
    string s;
    cin >> s;

    if (s == "++X" || s == "X++")
    {
         ans++;
    }
    else if (s == "++x" || s == "x++")
    {
         ans++;
    }
    else
    {
        ans--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
 
    cout << ans << endl;
 
    return 0;
}