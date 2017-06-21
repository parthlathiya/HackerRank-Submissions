#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define pll std::pair<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
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


//global var default value 0,;local var inside fun max size 10^6, but if declare globbally size 10^7
ll p[100001];
ll size[100001];
ll s[100001];
ll dpp[1001][1001];

ll find(ll a)
{
	if(p[a]==a)
		return a;
	return p[a]=find(p[a]);
}

void Union(ll a,ll b)
{
	a=find(a);
	b=find(b);
	if(a!=b){
		if(size[a]>size[b])
			swap(a,b);
		p[a]=b;
		size[b]+=size[a];
	}
}


ll dp(ll l,ll r)
{
	if(l>r)
		return 0;
	if(l==r)
		return 1;
	if(dpp[l][r]!=-1)
		return dpp[l][r];
	if(s[l]==s[r])
		return dpp[l][r]=dp(l+1,r-1)+2;
	return dpp[l][r]=max(dp(l+1,r),dp(l,r-1));
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("transform-to-palindrome_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------


	s(n);
	s(k);
	s(m);
	re(i,n)
		p[i]=i,size[i]=1;
	ll a,b;
	re(i,k){
		cin>>a>>b;
		Union(a-1,b-1);
	}
	ll tt;
	re(i,m){
		cin>>tt;
		s[i]=find(tt-1);
	}
	// re(i,m)
	// 	cout<<s[i]<<" ";
	re(i,m)
		re(j,m)
			dpp[i][j]=-1;
	cout<<dp(0,m-1);

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}