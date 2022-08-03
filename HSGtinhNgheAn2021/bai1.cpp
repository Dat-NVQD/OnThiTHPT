#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
     freopen("tonguoc.inp","r",stdin);
     freopen("tonguoc.out","w",stdout);

    long long a,b;
    do
    {
        cin >> a >> b;
    } while (a<=0 && b<=0);

    long long x, min; 
    if(a>b)
    {
        min = b;
    }
    else
    {
        min = a;
    }
    double uoc=0;
    for(long long i(1);i<=min;i++)
    {
        long long k=3*i;
        if(a%i==0 && b%k==0)
        {
            uoc=uoc+i;
        }
    }
    cout << uoc;
    

    return 0;
}