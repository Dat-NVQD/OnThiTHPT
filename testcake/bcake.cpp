#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const double pi=M_PI;
int main()
{
    freopen("bcake.inp","r",stdin);
    freopen("bcake.out","w",stdout);

    int n;cin>>n;
    int a[n],r,h;
    double V[n];
    for(int i(0);i<n;i++)
    {
        cin >> r >> h;
        V[i]=pi*r*r*h;
    }
    double check=0,sum=0;
    for(int i(0);i<n;i++)
    {
        if(V[i]>check)
        {
            sum=sum+V[i];
            check=V[i];
        }
    }
    cout << fixed << setprecision(3) <<  sum;

    return 0;
}