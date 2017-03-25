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

struct s
{
	ll l;
	ll w;
};

s a[5001];
ll dpp[5001][5001];	
ll smart[5001];

ll dp(int n,int k)
{
	ll ans=0;
    if(k==1)
    {
//        forall(i,1,n)
//            ans+=a[i].w*(a[i].l-a[0].l);
//        return dpp[n][k]=ans;
          return dpp[n][k]=smart[n-1];
    
    }
    if(n==k)return 0;
	if(dpp[n][k]!=-1)
		return dpp[n][k]; 
	ll we=0;
	ll tw=a[n-1].w;
	ans = dp(n-1,k-1);
//    cout<<"a"<<ans<<endl;
	forall(i,1,n-k+1)
	{
		we += tw*(a[n-i].l-a[n-1-i].l);
		ans=miN(ans,we+dp(n-1-i,k-1));
		tw += a[n-1-i].w;
    //    cout<<"aw"<<ans<<we<<endl;
    }	
	return dpp[n][k]=ans;
}


bool mf(s a,s b)
{
	return a.l<b.l;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("poles_in.txt","r",stdin);
#endif

	ll n,k;
	cin>>n>>k;

	forall(i,0,n)
	{cin>>a[i].l>>a[i].w;}
    
    forall(i,0,n+1)
        forall(j,0,k+1)
            dpp[i][j]=-1;
    smart[0]=0;
    forall(i,1,n)
        smart[i]=smart[i-1]+a[i].w*(a[i].l-a[0].l);
  
    sort(a,a+n,mf);
	cout<<dp(n,k);
    return 0;
}