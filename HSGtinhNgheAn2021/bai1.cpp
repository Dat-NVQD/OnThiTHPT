#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
     freopen("tonguoc.inp","r",stdin);
     freopen("tonguoc.out","w",stdout);

    int a,b;
    do
    {
        cin >> a >> b;
    } while (a<=0 && b<=0 );

    int x, min; 
    if(a>b)
    {
        min = b;
    }
    else
    {
        min = a;
    }

    //tim ước
    int uoc=0;
    for(int i(1);i<=min;i++)
    {
        int k=3*i;
        if(a%i==0 && b%k==0)
        {
            uoc=i;
        }
    }
    cout << uoc;
    

    return 0;
}