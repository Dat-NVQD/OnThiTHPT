#include<bits/stdc++.h>

using namespace std;
static int v=0,nh=0,t =0;
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    #endif 
    int n;
    cin >> n;
    
    float a[n];
    for(int i(0);i<n;i++)
    {
        cin >> a[i];
    }
    for(int i(0);i<n-2;i++)
    {
        for(int j(i+1);j<n-1;j++)
        {
            for(int k(j+1);k<n;k++)
            {
                float kq1 = (a[i]*a[i]+a[j]*a[j]-a[k])/(2*a[i]*a[j]);
                float kq2 = (a[i]*a[i]+a[k]*a[k]-a[j])/(2*a[i]*a[k]);
                float kq3 = (a[k]*a[k]+a[j]*a[j]-a[i])/(2*a[j]*a[k]);
                cout << kq1 << " " << kq2 << " " << kq3 <<"--";
                if(kq1>0 && kq1<1 && kq2>0 && kq2<1 && kq3>0 && kq3<1)
                    nh++;
                else if((kq1==0 && kq2>0 && kq2<1 && kq3>0 && kq3<1) || (kq2==0 && kq1>0 && kq1<1 && kq3>0 && kq3<1) || (kq3==0 && kq2>0 && kq2<1 && kq1>0 && kq1<1) )
                    v++;
                else if((kq1<0 && kq1>-1 && kq2<1 && kq3>0 && kq3<1) || (kq2<0 && kq2>-1 && kq1>0 && kq1<1 && kq3>0 && kq3<1) || (kq3<0 && kq3>-1 && kq2>0 && kq2<1 && kq1>0 && kq1<1))
                    t++;
                cout << nh << " " << v << " "<<t<<"\n";
            }
        }
    }
    cout << nh << " " << v << " "<<t;

    return 0;
}