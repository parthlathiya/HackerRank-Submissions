#include <bits/stdc++.h>
using namespace std;

#define forall(i,a,b)                for(int i=a;i<b;i++)
#define ll long long int
#define llu long long unsigned
#define vll vector<ll>
#define vllu vector<llu>
#define sll set<ll>
#define sllu set<llu>
#define pb push_back
#define mll map<ll,ll>
#define mllu map<llu,llu>
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define mod 1000000007

int main()
{

#ifndef ONLINE_JUDGE
	freopen("range-modular-queries_in.txt","r",stdin);
#endif

	int n,q;
	cin>>n>>q;
	int a[n];
	forall(i,0,n)
		cin>>a[i];
    
    forall(i,0,q)
    {
    	int l,r,x,y,ans=0;
    	cin>>l>>r>>x>>y;
    	forall(j,l,r+1)
    		if(a[j]%x==y)
    			ans++;
    	cout<<ans<<endl;
    }

    return 0;
}