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

void quyhoach(int n,int max,int MAX[],double v[])
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
    }
}

void findmax(int n, int MAX[],int &Vmax)
{
    for(int i(0);i<n-1;i++)
    {
        if(MAX[i]>MAX[i+1])
        {
            int temp = MAX[i+1];
            MAX[i+1]=MAX[i];
            MAX[i]=temp;
        }
    }
    Vmax=MAX[n-1];
}

void thapchongnguoc()
{
    int s(1);
    for(int i(0);i<n;i++)
    {
        for(int j(i);j<n;j++)
        {
            if(MAX[j]==s)
            {
                
            }
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
    quyhoach(n,max,MAX,v);int Vmax;
    findmax(n,MAX,Vmax);
    thapchongnguoc();

    return 0;
}