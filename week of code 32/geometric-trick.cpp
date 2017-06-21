#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define pb push_back
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/


int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("geometric-trick_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

	ll n;
	cin>>n;
	
	string s;
	cin>>s;
	vector<double> v[3];
	rep(i,0,s.length())
		v[s[i]-'a'].pb(log(i+1));
	ll ans=0;
	if(v[0].size()>v[2].size())
	{
		// ll ans=0;
		rep(i,0,v[1].size())
		{
			if(v[1][i]+v[1][i]-v[2][v[2].size()-1]>log(n))break;
			repr(j,v[2].size())
			{
			if(v[1][i]+v[1][i]-v[2][j]>log(n))break;
				// if(ceil(((v[1][i])*(v[1][i]))/v[2][j])>n)break;
				// if((((v[1][i])*(v[1][i]))/v[2][j])>n)break;

				if((v[1][i])*(v[1][i])%v[2][j]==0)
				{	
					if(s[(((v[1][i])*(v[1][i]))/v[2][j])-1]=='a')ans++;
				}
			}
		}
	}
	else
	{
		// ll ans=0;
		rep(i,0,v[1].size())
		{
			if(ceil(((v[1][i])*(v[1][i]))/v[0][v[0].size()-1])>n)break;
			repr(j,v[0].size())
			{
				if(ceil(((v[1][i])*(v[1][i]))/v[0][j])>n)break;
				// if((((v[1][i])*(v[1][i]))/v[2][j])>n)break;

				if((v[1][i])*(v[1][i])%v[0][j]==0)
				{	
					if(s[(((v[1][i])*(v[1][i]))/v[0][j])-1]=='c')ans++;
				}
			}
		}
	}

	
	cout<<ans;
	



//  --------------------------------------------------------------------------------------

return 0;
}
