#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define pll std::pair<ll, ll> 
#define ppll std::pair<pll, ll>
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
#define len length()
#define sz size()
const ll mod = 1e9 + 7;
const ll INF = 0x7FFFFFFFFFFFFFFF>>1;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/

ll n;
ll p[212345],l[212345],r[212345];

map<pll ,ll> dp;

ll fun(ll idx,ll lastpic)
{
	if(idx>=n || (lastpic!=-1 && lastpic+r[lastpic]>=n-1))
		return 0;
	if(dp.count({idx,lastpic})!=0)
		return dp[{idx,lastpic}];
	ll temp=-1;
	if(idx-l[idx]>lastpic && (lastpic==-1 || idx>lastpic+r[lastpic]))
		temp=p[idx]+fun(idx+1,idx);
	return dp[{idx,lastpic}]=max(temp,fun(idx+1,lastpic));
}

bool myf(ppll a,ppll b)
{
	if(a.ff.ss==b.ff.ss)
		if(a.ss==1 && b.ss==2)
			return true;
	if(a.ff.ss<b.ff.ss)
		return true;
	return false;

}
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

	cin>>n;
	ll ma=-1;
	re(i,n){
		cin>>p[i];
		ma=max(ma,p[i]);
	}
	re(i,n)
		cin>>l[i];
	re(i,n)
		cin>>r[i];

	vppll v;
	re(i,n)
	{
		v.pb({{i,i},1});
		v.pb({{i,i+r[i]},2});
	}

	sort(v.begin(),v.end(),myf);
	re(i,2*n)
		cout<<v[i].ff.ff<<v[i].ff.ss<<v[i].ss<<endl;

	// set<pll> s;
	// re(i,v.size())
	// 	cout<<v[i].ff<<" "<<v[i].ss<<endl;	
	// re(i,n)
	// 	{
	// 	if(s.empty()){
	// 		s.insert({i+r[i],p[i]});
	// 		s.insert({0,0});
	// 	}
	// 	else
	// 	{
	// 		// dp[i]=dp[i-l[i]-1]+p[i];
	// 		set<pll>::iterator it=s.lower_bound({i-l[i]-1,-1});
	// 		cout<<"------------------"<<endl;
	// 		for(auto aa:s)
	// 		cout<<aa.ff<<" "<<aa.ss<<endl;
	// 		cout<<"------------------"<<endl;

	// 		cout<<(*it).ff<<" "<<(*it).ss<<endl;
	// 		if((*it).ff<i-l[i]){
	// 			// cout<<(*it).ss<<endl;
	// 			s.insert({i+r[i],((*it).ss)+p[i]});	
	// 		}
	// 		else
	// 			s.insert({i+r[i],p[i]});
	// 	}
	// }
	// for(auto aa:s)
	// 	cout<<aa.ss<<" ";
	// cout<<fun(0,-1);
	// // dp.clear();

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}