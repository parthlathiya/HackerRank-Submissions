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

int rem[1234567];
ll a[512345];
ll b[512345];
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("maximum-gcd-and-sum_in.txt","r",stdin);
	
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
	// ll a;
	ll temp;
	re(i,n)
	{
		cin>>a[i];
		temp=sqrt(a[i]);
		rep(j,1,temp+1)
		{
			if(a[i]%j==0){
				rem[a[i]/j]=1;
				rem[j]=1;
			}
		}
	}
	ll ans=-1;
	re(i,n)
	{
		cin>>b[i];
		temp=sqrt(b[i]);
		rep(j,1,temp+1)
		{
			if(b[i]%j==0){
				if(rem[b[i]/j])
					ans=max(ans,b[i]/j);
				if(rem[j])
					ans=max(ans,j);
				// rem[i]=1;
			}
		}
	}
	ll maxa=-1,maxb=-1;
	re(i,n)
	{
		if(a[i]%ans==0 && a[i]>maxa)maxa=a[i];
		if(b[i]%ans==0 && b[i]>maxb)maxb=b[i];
	}
	cout<<maxa+maxb;


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}