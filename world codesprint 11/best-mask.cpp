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

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("best-mask_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

s(n);
// ll a[n];
ll con=pow(2,27)-1;
ll b[28];
rep(i,0,28)
	b[i]=con;
ll maxx=-1;
ll cnt;
ll t;
rep(i,0,n)
{
	cin>>t;
	ll bk=t;
	cnt=0;
	while((t & 1)==0){cnt++;t=t>>1;}
	maxx=max(maxx,cnt);
	b[cnt]=b[cnt]&bk;
	// cout<<(7 & 1)<<endl;
}
// rep(i,0,27)
// 	cout<<i<<" "<<b[i]<<endl;
// cout<<"f";
// cout<<maxx;
ll ans=pow(2,maxx);
repr(j,maxx)
{
	
	if((b[j]&ans)==0)
		ans+=pow(2,j);

}

cout<<fixed<<ans<<endl;
// cout<<fixed<<pow(2,26)<<endl;
//  --------------------------------------------------------------------------------------

return 0;
}
