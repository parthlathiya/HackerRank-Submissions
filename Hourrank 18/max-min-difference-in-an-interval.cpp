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
	freopen("max-min-difference-in-an-interval_in.txt","r",stdin);
#endif

    ll n,q;

    cin>>n>>q;
    ll a[n];
    forall(i,0,n)
        cin>>a[i];

    ll b[n][n];
    ll minn,maxx;
    forall(i,0,n)
    {
        forall(j,0,n)
        {
            maxx=-1;
            minn=10000000000;
            forall(k,i,j+1)
            {
                if(a[k]>maxx)maxx=a[k];
                if(a[k]<minn)minn=a[k];
            }
        b[i][j]=maxx-minn;
        }
    }

        forall(i,0,q)
        {
        ll a,b;
        cin>>a>>b;
        ll ans=0;
        forall(i,0,n)
        {
            forall(j,0,n)
            {
                if(b[i][j]>=minn && b[i][j]<=maxx)ans++;
            }
        }
        cout<<ans<<endl;
        }
    return 0;
}
