#include<iostream>
#include<fstream>

using namespace std;
void sovongle(int n, int a[],int sovong)
{
    int xl=1,check=1;
    if(check==n-1)
    {
        sovong++;
    }
    else
    {
        for(int i(0);i<n/2;i++)
        {
            if(check==n-1)
            {
                break;
            }
            sovong++;
            for(int j(0);j<n;j++)//1 7 3 2 4 6 5 8
            {
                if(a[j]==xl)
                {
                    xl=xl+2;
                    check=a[j];
                }
                if(check==n-1)
                    break;
            }
        }
    } 
    cout << sovong;
    
}
void sovongchan(int n, int a[],int sovong)
{
    int xc=2,check=2;
    if(check==n)
    {
        sovong++;
    }
    else
    {
        for(int i(0);i<n/2;i++)
        {
            if(check==n)
            {
                break;
            }
            sovong++;
            for(int j(0);j<n;j++)//1 7 3 2 4 6 5 8
            {
                if(a[j]==xc)
                {
                    xc=xc+2;
                    check=a[j];
                }
                if(check==n)
                {
                    break;
                }
            }
        }
    }
    cout << sovong;
}
int main()
{
    freopen("bacnam.inp","r",stdin);
    freopen("bacnam.out","w",stdout);

    int n;
    do
    {
       cin >> n;
    } while (2>=n && n<=200000);
    int a[n],sovong(0);for(int i(0);i<n;i++){cin >> a[i];};
    sovongle(n,a,sovong);cout << endl; 
    sovongchan(n,a,sovong);
    


    return 0;
}