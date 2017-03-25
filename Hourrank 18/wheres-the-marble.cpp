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
	freopen("wheres-the-marble_in.txt","r",stdin);
#endif

    int m,n;
    cin>>m>>n;
    int a,b;
    forall(i,0,n)
    {
    cin>>a>>b;
    if(a==m)
        m=b;
    else if(b==m)
        m=a;
    }
    cout<<m;

    return 0;
}
