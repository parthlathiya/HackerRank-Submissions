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


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("B_in.txt","r",stdin);
	
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
	ll x,y;
	vll ans;
	vpll a,b,c,d;

	re(i,m)
	{
		cin>>x>>y;
		if(x==0)
			d.pb({y,x});
		else if(x==n)
			b.pb({y,x});
		else if(y==0)
			c.pb({x,y});
		else if(y==n)
			a.pb({x,y});
	}
		rsrt(a);	
		srt(b);	
		srt(c);	
		rsrt(d);
		// cout<<c[i].ff-c[i+1].ff

		for(auto aa:b)
			c.pb({aa.ss,aa.ff});
		for(auto aa:a)
			c.pb({aa.ff,aa.ss});
		for(auto aa:d)
			c.pb({aa.ss,aa.ff});
		c.pb({c[0].ff,c[0].ss});

		re(i,c.size()-1)
		{
			ans.pb(abs(c[i].ff-c[i+1].ff)+abs(c[i].ss-c[i+1].ss));
		}

		// ans.pb(n-c[c.size()-1].ff+b[0].ff);
		// re(i,b.size()-1)
		// {
		// 	ans.pb(b[i].ff-b[i+1].ff);
		// }
		
		// ans.pb(n-b[b.size()-1].ff+n-a[0].ff);
		// re(i,a.size()-1)
		// {
		// 	ans.pb(a[i].ff-a[i+1].ff);
		// }
		// ans.pb(a[a.size()-1].ff+n-d[0].ff);
		// re(i,d.size()-1)
		// {
		// 	ans.pb(d[i].ff-d[i+1].ff);
		// }	
		// ans.pb(d[d.size()-1].ff+c[0].ff);
		
		ll anss=ans.size();
		ll temp=0;
		// for(auto a:ans)
		// 	cout<<a<<" ";
		re(i,anss)
			ans.pb(ans[i]);

		re(i,k-1)
			temp+=ans[i];
		ll mi=temp;
		// cout<<temp;
		rep(i,k-1,ans.size())
		{
			temp+=ans[i];
			temp-=ans[i-k+1];
			mi=min(mi,temp);
		
			// cout<<temp<<" ";
		}
		cout<<mi;
	


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}