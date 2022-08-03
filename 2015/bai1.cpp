#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void xoamang(string S, string T)
{
    for(int i(0);i<S.length();i++)
    {
        int s(0);
        if(S[i]==T[0])
        {
            for(int j(0);j<T.length();j++)
            {
                if(S[i+s]==T[s])
                {
                    s++;
                }
            }
        }
        if(s==T.length())
        {
            S.erase(i,s);
            i=0;
        }
    }
    cout << S;
}

int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    string S,T;
    cin >> S >> T;
    xoamang(S,T);
    

    return 0;
}