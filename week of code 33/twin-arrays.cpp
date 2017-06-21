#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define pll std::pair<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
#define fi first
#define se second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1e9+7
#define maxlong 1e18+5


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

// vll primes;
// vll primefac[10000001];

// void sieve(ll n)
// {
// 	rep(i,2,n+1)
// 	{
// 		if(primefac[i].empty())
// 		{	
// 			primes.pb(i);
// 			for(ll j=i;j<=n;j+=i)
// 				primefac[j].pb(i);
// 		}
// 	}
// }


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("twin-arrays_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(n);
	ll a[n+1],b[n+1];
	re(i,n)
		cin>>a[i];
	re(i,n)
		cin>>b[i];

	ll mai=n;
	a[n]=maxlong;
	ll mbi=n;
	b[n]=maxlong;

	re(i,n){
		if(a[mai]>a[i])mai=i;
		if(b[mbi]>b[i])mbi=i;
	}
	if(mai==mbi)
	{
		ll mais=n;
		ll mbis=n;
		re(i,n){
			if(i==mai)continue;
			if(a[mais]>a[i])mais=i;
			if(b[mbis]>b[i])mbis=i;
		}
		if(a[mais]+b[mbi]<a[mai]+b[mbis])
			cout<<a[mais]+b[mbi];
		else
			cout<<a[mai]+b[mbis];
	}
	else
		cout<<a[mai]+b[mbi];
	
//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}