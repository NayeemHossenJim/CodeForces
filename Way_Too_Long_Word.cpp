#include <bits\stdc++.h>
using namespace std;
void Word ()
{
    string J;
    cin >> J;
    if(J.length()>10)
    {
        cout << J[0] << J.length()-2 << J[J.length()-1] << endl ;
    }
    else
    {
        cout << J << endl ;
    }
}
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        Word();
    }
    

    return 0;
}