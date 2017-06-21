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
#define mod 1000000007
#define maxlong 9223372036854775808


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

	// #ifdef PARTH_LATHIYA_HOME

	// 	freopen("pythagorean-triple_in.txt","r",stdin);
	
	// 	ll ttt,bkkk;
	// 	cin>>ttt;
	// 	bkkk=ttt;
	// 	while(ttt--) {
	// 		cout<<"Testcase - "<<bkkk-ttt<<"\n";
	// #endif

//--------------------------------------------------------------------------------------

	rep(x,5,10000000)
	{
		ll a=x;
		if(a%2){
			ll temp=(a*a-1)/2;
			// cout<<a*a+temp*temp<<" "<<(temp+1)*(temp+1)<<endl;
			if((a*a+temp*temp)!=((temp+1)*(temp+1))){
				cout<<a<<endl;break;
			}
		
		}
		else
		{
			ll origa=a;
			while(a%2==0)a/=2;
			ld temp=(a*a-1)/2;

			if(origa==4194306)cout<<a<<origa*origa+ (temp*origa/a)*(temp*origa/a)<<" "<<((temp+1)*origa/a)*((temp+1)*origa/a)<<endl;
			if((origa*origa+ (temp*origa/a)*(temp*origa/a))!=(((temp+1)*origa/a)*((temp+1)*origa/a))){
					cout<<origa<<"d"<<endl;break;
			}
		}
	}

//--------------------------------------------------------------------------------------
	
	// #ifdef PARTH_LATHIYA_HOME
	// 	cout<<"\n"; }
	// #endif

	return 0;
}