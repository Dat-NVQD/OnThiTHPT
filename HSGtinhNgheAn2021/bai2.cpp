#include<iostream>
#include<fstream>
#include<string>
#include<string.h>

using namespace std;

void timgsocaytrendung(string a,int n,int b[],int &dem)
{
    
    int max=0;
    for(int j(0);j<a.length();j++)
    {
        int s(0);
        for(int k(0);k<a.length();k++)
        {
            if(a[j]==a[k])
            {
                s++;
            }
            if(a[j]!=a[k])
            break;
        }
        if(max<s)
        {
            max=s;
        }
        
    }
   
    b[dem]=max;
    dem++;

}

int main()
{
    freopen("xanhdep.inp","r",stdin);
    freopen("xanhdep.out","w",stdout);

    int n;cin >> n; string a;int b[n]; int dem(0);
    for(int i(0);i<n;i++)
    {
        cin >> a;
        timgsocaytrendung(a,n,b,dem);
    }
    for(int i(0);i<dem-1;i++)
    {
        if(b[i]>b[i+1])
        {
            b[i+1]=b[i];
        }
    }
    cout << b[dem-1];

    return 0;
}