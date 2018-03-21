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
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define maxlong 1e18+5
 
 
/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/

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
 
	s(n);
	s(q);
	ll t[n],p[n];
	re(i,n)
		cin>>t[i];
 	re(i,n)
		cin>>p[i];
	// mll m;
	ll suf[n];
	suf[n-1]=p[n-1];
	for(ll i=n-2;i>=0;i--)
		suf[i]=max(suf[i+1],p[i]);

	ll temp1[n]; 
	ll temp2[n]; 

	vll t1;
	vll t2;
	t1.eb(t[0]);
	t2.eb(p[0]);
	ll curt=t[0],curp=p[0];
	// ll j=1;
	rep(i,1,n)
	{
		if(p[i]>curp){
			curp=p[i];
			t1.eb(t[i]);
			t2.eb(p[i]);
		}
	}
	ll a,b;

	re(i,q)
	{
		cin>>a>>b;
		if(a==1)
		{
			if(b>suf[0])
				cout<<-1<<endl;
			else
			{
				ll temp=lower_bound(t2.begin(),t2.end(),b)-t2.begin();
				cout<<t1[temp]<<endl;
			}
		}
		else
		{
			if(b>t[n-1])
				cout<<-1<<endl;
			else
			{
				ll temp=lower_bound(t,t+n,b)-t;
				cout<<suf[temp]<<endl;
			}
		}
	}

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif
 
	return 0;
} 
