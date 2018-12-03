#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::map<ll, ll> 
#define mpll std::map<pll, ll>
#define mppll std::map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
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

ll minn(ll a,ll b,ll c,ll d,ll e,ll f,ll g)
{
	return min(a,min(b,min(c,min(d,min(e,min(f,g))))));
}
ll a[212][212][212];
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("D_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	// std::vector<int> v[100];
	// std::vector<int> temp(100,4);
	// rep(i,0,100)
	// 	v[i] = temp;

	s(n);
	s(m);
	s(k);
	s(p);
	s(q);
	ll ans=0;
	ll aa,b,c,d;

	re(i,n)
	{
		cin>>aa>>b>>c>>d;
		rep(j,aa,c+1)
		{
			rep(l,b,d+1)
				a[i][j][l]=1;
		}	
		ans+=(c-aa+1)*(d-b+1);
	}
ll ma=-1;

	rep(i,1,n)
		rep(j,1,m)
			rep(l,1,k){
				a[i][j][l]=minn(a[i-1][j][l],a[i][j-1][l],a[i-1][j-1][l],a[i-1][j][l-1],a[i][j-1][l-1],a[i-1][j-1][l-1],a[i][j][l-1])+1;
				// cout<<a[i][j][l];
				ma=max(ma,a[i][j][l]);
			}
			cout<<ans<<" "<<ma<<endl;
		cout<<max(q*ans+p,p*ma+q*(ans-ma*ma*ma));

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}