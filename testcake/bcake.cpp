#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

void thetich(double v[],int n)
{
    for(int i(0);i<n;i++)
    {
        int r,h;
        cin >> r >> h;
        v[i]=M_PI*r*r*h;
    }
}

void quyhoach(int n,int max,int MAX[],double v[],int &vmax)
{
    for(int i(1);i<n;i++)
    {
        for(int j(0);j<i;j++)
        {
            if(v[j]<v[i])
            {
                MAX[i]=MAX[j]+1;
            }
        }
        if(MAX[i]>vmax)
            vmax=MAX[i];
    }
}



void thapchongnguoc()
{
    int s(0)
    for(int i(0);i<n;i++)
    {
        for(int j(s);j<n;j++)
        {
            
        }
        s++;
    }
}

int main()
{
    freopen("bcake.inp","r",stdin);
    freopen("bcake.out","w",stdout);
    int n;cin >> n;double v[n];
    thetich(v,n);
    int max(0), MAX[n];
    for(int i(0);i<n;i++)
    {
        MAX[i]=1;
    }
    int vmax = 1;
    quyhoach(n,max,MAX,v,vmax);
    findmax(n,MAX,Vmax);
    for(int i(0);i<n;i++)
    {
        thapchongnguoc();
    }

    return 0;
}