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
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
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
#define ite iterator
#define maxlong 9223372036854775808
#define diff(a,b) max(a,b)-min(a,b)


/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

ll power(ll x, ll y,ll m)
{
	// cout<<x<<"x"<<y<<"y"<<p<<"p";
    ll res = 1;      // Initialize result
 
    x = x % m;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % m;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % m;  
    }
    return res;
}


int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("numeric-string_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

	string s;
	cin>>s;
	ll k,b,m;
	cin>>k>>b>>m;
	ll mul=0;
	ll ans=0;
	rep(i,0,k)
	{
		ans = (ans + ((s[i]-'0')*power(b,k-i-1,m))%m)%m;
	}
	// cout<<ans;
	ll finalans=ans;
	rep(i,1,s.length()-k+1)
	{
		ans = (m + ans - ((s[i-1]-'0')*power(b,k-1,m))%m)%m;
		ans = (ans * b)%m;
		ans = (ans + (s[i+k-1]-'0'))%m;

	// cout<<ans;
		
		finalans+=ans;
	}

	cout<<finalans;

//  --------------------------------------------------------------------------------------

return 0;
}
