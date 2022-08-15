#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void thetich(int i, double V[])
{
    int r,h;
    cin >> r >> h;
    V[i] = M_PI*r*r*h;
}

void quyhoach(int i, double sum[], double V[])
{
    if(i==0)
    {
        sum[i]=V[i];
    }
    else
    {
        double max=V[i];
        sum[i]=V[i];
        for(int j(i);j>0;j--)
        {
            if(V[j-1]<max)
            {
                sum[i]=sum[i]+V[j-1];
                max=V[j-1];
            }
        }
    }
}

void xuli(int n, double sum[])
{
    for(int i(0);i<n-1;i++)
    {
        if(sum[i]>sum[i+1])
        {
            sum[i+1]=sum[i];
        }
    }
    cout << fixed << setprecision(3) << sum[n-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("bcake.inp","r",stdin);
    freopen("bcake.out","w",stdout);
    int n; cin >> n;double V[n],Sum[n];
    for(int i(0);i<n;i++)
    {
        thetich(i,V);
    }
    for(int i(0);i<n;i++)
    {
        quyhoach(i,Sum,V);
    }
    xuli(n,Sum);


    
    
    
    
    
    
    
    
    
    
    
    
    //cout << fixed << setprecision(3) <<  sum;
    return 0;
}
