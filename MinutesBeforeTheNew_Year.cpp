#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,M,T,Date,Time;
    cin>>T;
    while(T--)
    {
        Time=0;
        cin>>H>>M;
        Date=24*60;
        Time=H*60+M;
        cout<<Date-Time<<endl;
    }
}