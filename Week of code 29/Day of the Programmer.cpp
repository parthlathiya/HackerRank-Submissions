#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007



int main()
{

#ifndef ONLINE_JUDGE
	freopen("Day of the Programmer_in.txt","r",stdin);
#endif

    int y;
    cin>>y;

    if(y<=1917)
    {
        if(y%4)
            cout<<"13.09."<<y;
        else
            cout<<"12.09."<<y;
    }
    else if(y==1918)
    {
        cout<<"26.09.1918";
    }
    else
    {
        if( (!(y%4) && (y%100) ) || !(y%400))
            cout<<"12.09."<<y;
        else
            cout<<"13.09."<<y;
    }
    return 0;
}
